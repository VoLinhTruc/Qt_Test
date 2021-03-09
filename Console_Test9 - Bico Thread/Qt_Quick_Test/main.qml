import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    objectName: "window"
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Connections {
        target: window
//        onClosing: thread.terminateThread() // old syntax
        function onClosing ()
        {
            thread.terminateThread()
        }
    }


    Button {
        objectName: "button"
        id: button
        x: 423
        y: 287
        text: qsTr("main")

        onClicked: thread.test(qmess.text, qdata.text)
    }

    TextField {
        id: qmess
        x: 205
        y: 149
        width: 318
        height: 40
        placeholderText: qsTr("Text Field")
    }

    TextField {
        id: qdata
        x: 205
        y: 214
        width: 318
        height: 40
        placeholderText: qsTr("Text Field")
    }
}
