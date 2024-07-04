/**********************************************************
Author: 微信公众号(你才小学生)
WeChat public platform: nicaixiaoxuesheng
Email:  2088201923@qq.com
**********************************************************/
import QtQuick 2.0

Rectangle {
    signal valueSig(real val)
    property real value: 0.5 //0.1-1.0
    color: "#00000000"

    onWidthChanged: sliderId.x = value*(width)
    onValueChanged: {
        if (sliderId.isHMSliding == false) {
            sliderId.x = value*(width- sliderId.width)
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: mouseX <= (rectBackgroundId.width - sliderId.width) ?
                       valueSig(mouseX/(rectBackgroundId.width- sliderId.width)) :
                       valueSig((rectBackgroundId.width - sliderId.width)/(rectBackgroundId.width- sliderId.width))
    }

    Rectangle {
        id: rectBackgroundId
        width: parent.width; height: parent.height/5
        anchors.centerIn: parent
        color: "#e9e9e9"
    }

    Rectangle {
        id: progressId
        width: sliderId.x*1.05; height: parent.height/5
        anchors.verticalCenter: parent.verticalCenter
        color: "#474747"
    }

    Rectangle {
        id: sliderId
        property bool isHMSliding: false
        anchors.verticalCenter: parent.verticalCenter
        width: parent.width/12; height: width//parent.height
        radius: width/2
        color: "#474747"

        MouseArea {
            id: mouseAreaId
            anchors.fill: parent
            drag.target : sliderId
            drag.axis: Drag.XAxis
            drag.minimumX : 0
            drag.maximumX : rectBackgroundId.width - sliderId.width
            onPressed: sliderId.isHMSliding = true
            onReleased: {
                sliderId.isHMSliding = false
                valueSig(sliderId.x/(rectBackgroundId.width- sliderId.width))
            }
        }
    }

}
