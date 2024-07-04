/**********************************************************
Author: 微信公众号(你才小学生)
WeChat public platform: nicaixiaoxuesheng
Email:  2088201923@qq.com
**********************************************************/
import QtQuick 2.0

Item {
    width: parent.width; height: parent.height

    Row {
        anchors.fill: parent

        Rectangle {
            width: parent.width/6; height: parent.height
            Image {
                width: 0.4*(parent.width > parent.height ? parent.height:parent.width);
                height: width
                anchors.centerIn: parent
                source: "qrc:/Resource/MusicPicture/Folder.png"
            }

            MouseArea {
                anchors.fill: parent
                onClicked: fileBrowserListModel.cdNextPath(modelData.displayPathName)
            }
        }

        Rectangle {
            width: 4*parent.width/6; height: parent.height

            Text {
                anchors.verticalCenter: parent.verticalCenter
                width: parent.width
                elide: Text.ElideMiddle
                color: "black"
                font.pixelSize: parent.height/3.5
                text: modelData.displayPathName
            }

            MouseArea {
                anchors.fill: parent
                onClicked: fileBrowserListModel.cdNextPath(modelData.displayPathName)
            }
        }

        Rectangle {
            anchors.verticalCenter: parent.verticalCenter
            width: 1*parent.width/6; height: width
            radius: width/2

            Image {
                width: 0.4*(parent.width > parent.height ? parent.height:parent.width);
                height: width
                anchors.centerIn: parent
                source: modelData.isSelected ? "qrc:/Resource/MusicPicture/YellowSelection.png" :
                                               "qrc:/Resource/MusicPicture/NotoSelection.png"
            }

            MouseArea {
                anchors.fill: parent
                onClicked: modelData.isSelected = !modelData.isSelected
            }
        }
    }

    Rectangle {
        anchors.bottom: parent.bottom;
        anchors.right: parent.right
        width: parent.width - parent.width/6; height: 1;
        color: "#f2f2f2"
    }
}
