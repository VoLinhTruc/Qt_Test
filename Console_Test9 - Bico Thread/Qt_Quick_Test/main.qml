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

    // This block of code will not be change - begin --------------------------------------------
        signal notifyFromBackend(string value)
        onNotifyFromBackend:
        {
            // This block of code is allowed to be changed - begin -------------------
            console.log(value)
            // This block of code is allowed to be changed - end -------------------
        }


        Connections {
            target: window
    //        onClosing: thread.terminateThread() // old syntax
            function onClosing ()
            {
                thread.terminateThread()
            }
        }
    // This block of code will not be change - end --------------------------------------------


    Button {
        objectName: "button"
        id: button
        x: 423
        y: 287
        text: qsTr("main")

        onClicked: thread.fromUI(qmess.text, qdata.text)
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
