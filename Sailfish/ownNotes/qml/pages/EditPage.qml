import QtQuick 2.0
import Sailfish.Silica 1.0
import Sailfish.Silica.theme 1.0
import net.khertan.python 1.0
//import net.khertan.documenthandler 1.0

Page {
    id: page
    property alias path:        textEditor.path;
    property var oldName:       textEditor.path ? pyNotes.getNoteNameNoExtension(textEditor.path) : ''
    property var oldCategory:   textEditor.path ? pyNotes.getNoteCategory(textEditor.path) : ''
    property var oldText:       textEditor.path ? pyNotes.getNoteBody(textEditor.path) : ''

    SilicaFlickable {
        id: flicker
        anchors.fill: parent

        contentHeight:  contentColumn.height
        contentWidth: flicker.width

        PullDownMenu {
            MenuItem {
                text: qsTr("Save Note")
                onClicked: {
                    if (noteCategory.text=== oldCategory && noteName.text===oldName && textEditor.text===oldText){
                        console.log('Note did not change');
                    } else if(noteName.text===''){
                        console.log('Note has empty title');
                    } else {
                        console.log('Note change');
                        if(textEditor.path!='')pyNotes.remove(textEditor.path);
                        console.debug(pyNotes.saveNoteNew(noteCategory.text,noteName.text,textEditor.text,true ));
                        pyNotes.requireRefresh();
                    }
                    pageStack.push(Qt.resolvedUrl("MainPage.qml"))
                }
            }
            MenuItem {
                text: qsTr("Cancel")
                onClicked: pageStack.push(Qt.resolvedUrl("MainPage.qml"))
            }
        }

        VerticalScrollDecorator {
        }

        Column {
            id: contentColumn
            anchors {
                left: parent.left
                right: parent.right
                margins: 10
            }

            PageHeader {
                title: textEditor.path ? qsTr("Edit Note") : qsTr("Add Note")
            }

            TextField {
                id:noteName
                width: parent.width
                label: qsTr("<b>Name</b>")
                text: textEditor.path ? pyNotes.getNoteNameNoExtension(textEditor.path) : ''
                placeholderText: qsTr("<b>Name</b>")
                onTextChanged: {
                    if( !pyNotes.text_patern_filename( noteName.text )){
                        errorPanel.displayError("Name is not valid.")
                    }
                }
            }
            TextField {
                id:noteCategory
                width: parent.width
                label: qsTr("<b>Category</b>")
                text: textEditor.path ? pyNotes.getNoteCategory(textEditor.path) : ''
                placeholderText: qsTr("<b>Category</b>")
                onTextChanged: {
                    if( !pyNotes.text_patern_category( noteCategory.text )){
                        errorPanel.displayError("Category is not valid.")
                    }

                }
            }

            TextArea {
                id:textEditor
                property bool modified: false
                property string path
                width: parent.width
                color: Theme.primaryColor
                font.family: pyNotes.get('Display', 'fontfamily')
                font.pixelSize: pyNotes.get('Display', 'fontsize')
                text: textEditor.path ? pyNotes.getNoteBody(textEditor.path) : ''

                onTextChanged: {
                    //console.log('|'+textEditor.path+'|'+(textEditor.path===''))

                }
            }

        }

    }
}
