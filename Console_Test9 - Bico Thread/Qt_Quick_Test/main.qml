import QtQuick 2.12
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    objectName: "window"
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")



    Button {
        objectName: "button"
        id: button
        x: 270
        y: 220
        text: qsTr("main")

        onClicked: thread.te
    }

    ComboBox {
        id: comboBox
        x: 230
        y: 304
    }

    Connections {
        target: window
        onClosing: console.log("clicked")
    }
}
