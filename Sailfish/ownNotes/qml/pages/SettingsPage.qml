import QtQuick 2.0
import Sailfish.Silica 1.0
import Sailfish.Silica.theme 1.0
import net.khertan.python 1.0

Page {
    id: page
    property var oldSetUrl:         pyNotes.get('WebDav', 'url')
    property var oldSetLogin:       pyNotes.get('WebDav', 'login')
    property var oldSetPass:        pyNotes.get('WebDav', 'password')
    property var oldSetFolder:      pyNotes.get('WebDav', 'remoteFolder')
    property var oldSetSSL:         pyNotes.get('WebDav', 'nosslcheck')===0 ? false : true
    property var oldSetAuto:        pyNotes.get('WebDav', 'startupsync')===0 ? false : true
    property var oldSetDebug:       pyNotes.get('WebDav', 'debug')===0 ? false : true
    property var oldFontChooser:    pyNotes.get('Display','fontfamily')
    property var oldFontSize:       pyNotes.get('Display','fontsize')


//    backNavigation: false
    property var fontFamilies: ["Monospace", "Serif", "Sans"];

    SilicaFlickable {
        id: flicker
        anchors.fill: parent

        contentHeight: column.height
        contentWidth: flicker.width

        PullDownMenu {
            MenuItem {
                text: qsTr("Save")
                onClicked: {
                    if (setUrl.text!== oldSetUrl){
                        console.log('URL changed! '+setUrl.text+' '+oldSetUrl);
                        pyNotes.set('WebDav', 'url', setUrl.text)
                    }
                    if (setLogin.text!== oldSetLogin){
                        console.log('Login changed!'+setLogin.text+' '+oldSetLogin);
                        pyNotes.set('WebDav', 'login', setLogin.text)
                    }
                    if (setPass.text!== oldSetPass){
                        console.log('Pass changed!'+setPass.text+' '+oldSetPass);
                        pyNotes.set('WebDav', 'password', setPass.text)
                    }
                    if (setFolder.text!== oldSetFolder){
                        console.log('Folder changed!'+setFolder.text+' '+oldSetFolder);
                        pyNotes.set('WebDav', 'remoteFolder', setFolder.text)
                    }
                    if (setSSL.checked!== oldSetSSL){
                        console.log('SSL changed!'+setSSL.checked+' '+oldSetSSL);
                        pyNotes.set('WebDav','nosslcheck',setSSL.checked)
                    }
                    if (setAuto.checked!== oldSetAuto){
                        console.log('Auto changed!'+setAuto.checked+' '+oldSetAuto);
                        pyNotes.set('WebDav','startupsync',setAuto.checked)
                    }
                    if (setDebug.checked!== oldSetDebug){
                        console.log('Debug changed!'+setDebug.checked+' '+oldSetDebug);
                        pyNotes.set('WebDav','debug',setDebug.checked)
                    }
                    if (fontChooser.currentIndex!== oldFontChooser){
                        var ff = page.fontFamilies;
                        console.log('Font changed to index '+' '+oldFontChooser+' '+fontChooser.currentIndex+' or '+ff[fontChooser.currentIndex]);
                        if (fontChooser.currentItem) {
                            pyNotes.set('Display', 'fontfamily', ff[fontChooser.currentIndex]);
                        }

                    }
                    if (fontSize.checked!== oldFontSize || 1==1){
                        console.log('fontSize changed!');
                        pyNotes.set('Display', 'fontsize', fontSize.value);
                        fontSize.valueText = ''+fontSize.value;
                    }

                    pageStack.push(Qt.resolvedUrl("MainPage.qml"))
                }
            }
            MenuItem {
                text: qsTr("Cancel")
                onClicked: pageStack.push(Qt.resolvedUrl("MainPage.qml"))
            }
        }
        PushUpMenu {
            MenuItem {
                text: qsTr("Return to the Top")
                onClicked: flicker.scrollToTop()
            }
        }


        VerticalScrollDecorator {
        }

        Column {
            id: column
            anchors {
                left: parent.left
                right: parent.right
                margins: 10
            }

            PageHeader {
                title: qsTr("Settings")
            }


            SectionHeader {
                text: qsTr('ownCloud/WebDav Sync')
            }

            TextField {
                id:setUrl
                width: parent.width
                label: qsTr("Url")
                text: pyNotes.get('WebDav', 'url')
                onFocusChanged: {
                    if( !pyNotes.text_patern_url( setUrl.text )){
                        errorPanel.displayError("URL is not valid.")
                    }
                }
            }

            TextField {
                id: setLogin
                width: parent.width
                label: qsTr("Login")
                text: pyNotes.get('WebDav', 'login')
                placeholderText: qsTr("Login")
             }

            TextField {
                id: setPass
                width: parent.width
                label: qsTr("Password")
                text: pyNotes.get('WebDav', 'password')
                placeholderText: qsTr("Password")
                echoMode: TextInput.Password
            }

            TextField {
                id: setFolder
                width: parent.width
                label: qsTr("Remote Folder Name")
                text: pyNotes.get('WebDav', 'remoteFolder')
                placeholderText: qsTr("Remote Folder Name")
            }

            TextSwitch {
                id: setSSL
                text: qsTr("Do not check ssl certificate")
                description: qsTr("This can be usefull in case of self signed certificate, but you will not be protected in case of MITM Attack.")
                checked: pyNotes.get('WebDav','nosslcheck')
            }

            TextSwitch {
                id: setAuto
                text: qsTr("Auto Sync")
                description: qsTr("Launch synchronisation on startup.")
                checked: pyNotes.get('WebDav','startupsync')
            }


            TextSwitch {
                id: setDebug
                text: qsTr("Debug")
                description: qsTr("Store sync debug logs.")
                checked: pyNotes.get('WebDav','debug')
            }

            SectionHeader {
                text: qsTr('Appearance')
            }



            FontComboBox {
                id: fontChooser
                label: qsTr('Font:')

                model: ListModel {
                    id: fontList

                    function fontIndex(f) {
                        for (var i = 0; i < fontList.count; ++i) {
                            if (fontList.get(i).family === f) {
                                return i
                            }
                        }
                        return -1
                    }
                    Component.onCompleted: {
                        //var ff = Theme._fontFamilies()
                        var ff = page.fontFamilies;
                        var s = pyNotes.get('Display', 'fontfamily');
                        for (var i = 0; i < ff.length; ++i) {

                            fontList.append({ 'family': ff[i] })
                            if (ff[i] === s) {
                                fontChooser.currentIndex = i;
                            }
                        }
                    }
                }
                onCurrentIndexChanged: {
//                    console.log('Set '+currentIndex);
                    //var ff = Theme._fontFamilies()
                    var ff = page.fontFamilies;
//                    console.log(ff[currentIndex]);
//                    console.log(currentItem);
                    if (currentItem) {
//                        console.log(currentItem.text);
//                        pyNotes.set('Display', 'fontfamily', ff[currentIndex]);
                    }

                }
            }

            Slider {
                id: fontSize
                label: qsTr('Size')
                minimumValue: 7
                maximumValue: 60
                stepSize: 1
                width: parent.width
                Component.onCompleted: {
                    console.log(pyNotes.get('Display', 'fontsize'));
                    valueText = pyNotes.get('Display', 'fontsize');
                    value = parseInt(pyNotes.get('Display', 'fontsize'));
                }
                onValueChanged: {
                    valueText = ''+value;
                }

            }
        }
    }

}





