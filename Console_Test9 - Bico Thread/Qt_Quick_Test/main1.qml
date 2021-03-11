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
            qmess1.text = value
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
        x: 270
        y: 333
        text: qsTr("main1")

        Connections {
            target: button
            onClicked: qmess1.text = qmess.text
        }

    }

    TextField {
        objectName: "qmess"
        id: qmess
        x: 57
        y: 113
        placeholderText: qsTr("Text Field")

        function readValues(val)
        {
            text = val;
        }
    }

    TextField {
        id: qmess1
        x: 385
        y: 194
        objectName: "qmess"
        placeholderText: qsTr("Text Field")
    }

}


