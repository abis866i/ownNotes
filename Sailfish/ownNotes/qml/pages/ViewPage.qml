import QtQuick 2.0
import Sailfish.Silica 1.0
import Sailfish.Silica.theme 1.0
import net.khertan.python 1.0
//import net.khertan.documenthandler 1.0

Page {
    id: page
    allowedOrientations: Orientation.Landscape | Orientation.Portrait;
    property alias path: textViewer.path;

    RemorsePopup {
        id: remorsePublish
    }

    SilicaFlickable {
        id: flick
        anchors.fill: parent
        contentHeight:  contentColumn.height
        contentWidth: flick.width

        PullDownMenu {
            MenuItem {
                text: qsTr("Edit Note")
                onClicked: {
                    onClicked: pageStack.push(Qt.resolvedUrl("EditPage.qml"), {path: path})
                }
            }
            MenuItem {
                text: qsTr("Back to Main")
                onClicked: pageStack.push(Qt.resolvedUrl("MainPage.qml"))
            }
        }

        Column {
            id: contentColumn
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            spacing: 5

            PageHeader {
                title: 'Note: '+ pyNotes.getNoteNameNoExtension(textViewer.path)
            }

            Rectangle {
                   border.width: 2
                   height: 2
                   width: parent.width
                   anchors {
                       left: parent.left
                       leftMargin: Theme.horizontalPageMargin
                   }
                   border.color: Theme.secondaryColor
            }
            SectionHeader {
                text: (pyNotes.getNoteCategory(textViewer.path) === "") ? 'No Category' : 'Category: '+ pyNotes.getNoteCategory(textViewer.path)
                font.family: pyNotes.get('Display', 'fontfamily')*1.3
            }

            TextArea {
                id:textViewer
                property string path
                width: parent.width
                readOnly: true
                color: Theme.primaryColor
                font.family: pyNotes.get('Display', 'fontfamily')
                font.pixelSize: pyNotes.get('Display', 'fontsize')
                text: pyNotes.getNoteBody(textViewer.path)
            }

        }
    }
}



