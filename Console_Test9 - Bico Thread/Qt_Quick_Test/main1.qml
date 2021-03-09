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
        x: 270
        y: 333
        text: qsTr("main1")
    }

    TextField {
        objectName: "qmess"
        id: qmess
        x: 220
        y: 220
        placeholderText: qsTr("Text Field")

        function readValues(val)
        {
            text = val;
        }
    }

}


