### 百度地图调用方法
#### 百度地图开放平台的 AK 申请
在[百度地图开放平台](https://lbsyun.baidu.com/index.php?title=%E9%A6%96%E9%A1%B5) 申请 AK 密钥，获取密钥的方法可见： [账号和获取密钥](https://lbs.baidu.com/index.php?title=jspopularGL/guide/getkey) 

#### 使用百度地图 API
> **应用程序接口** (API: Application Program Interface) 是一组定义、程序及协议的集合，通过 API 接口实现计算机软件之间的相互通信。API 的一个主要功能是提供通用功能集。程序员通过调用 API 函数对应用程序进行开发，可以减轻编程任务。 API 同时也是一种中间件，为各种不同平台提供数据共享。

JavaScript API GL 产品介绍及使用指南可见：[jspopularGL | 百度地图API SDK](https://lbsyun.baidu.com/index.php?title=jspopularGL) 

获取 AK 密钥后在 html 文件中引用百度地图的 API 文件，html 文件的使用示例可参考：[地图JS API示例 | 百度地图开放平台](https://lbsyun.baidu.com/jsdemo.htm#webgl0_1) 

#### Qt 程序的编写
主要用到 QWebEngineView 和 QWebEnginePage 两个类。

QWebEngineView 类下有一个 QWebEnginePage 的类，虽然 QWebEngineView 也有一个 loadUrl 接口，但是大部分时候还是以 QWebEnginePage 来加载网页。因为 QWebEnginePage 中有可以运行 JavaScript 的接口，而且可以通过 QWebEngineHistory 提供页面的浏览历史和导航，以及一些 QAction 操作网页。

### 注意事项
#### 百度地图 API 应用类型的选择
百度地图 API 的应用类型包括：服务端、微信小程序、Android SDK、IOS SDK、浏览器端，其中，服务端和浏览器端的解释如下：

**服务端**就是指数据操作需要在百度地图服务器上进行接口数据交互，不能在前端代码中直接调用，跨域不支持，开发多一个后端。

**浏览器端**就是指数据操作需要在 Web 前端就可以完成的，**一般地，大多是普通开发者直接申请浏览器端 AK 即可**。

Qt 嵌入百度地图是通过调用 QWebEngineView 类，该类是通过将 URL 加载到网络视图窗口，以实时显示来自互联网的实时网络内容，因此在百度地图 API 创建应用时应选择**浏览器端**。

#### 编译器的选择
QtWebEngine 支持以下平台：
- Linux (x86, x86_64, x64)
- Mac (clang x64, XCode version >= 5.1)
- Windows (MSVC 2013 packages)

Windows 下的 **MinGW 编译器不支持 QtWebEngine 模块**，应选用 MSVC 编译器。

#### 编译模式的选择
需选择 Release 模式：

|模式|含义|
|--|--|
|Debug|Debug 通常称为**调试版本**，通过一系列编译选项的配合，编译的结果通常包含调试信息，而且不做任何优化，从而为开发人员提供强大的应用程序调试能力。在程序出现错误的时候，在 Debug 模式下通过设置断点来调试程序。|
|Release|Release 通常称为**发布版本**，是为用户使用的，一般用户不允许在发布版本上进行调试。所以不保存调试信息，同时，它往往进行了各种优化，以达到代码最小和速度最优，进而为用户提供便利。|
