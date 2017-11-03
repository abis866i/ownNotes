import QtQuick 2.0
import Sailfish.Silica 1.0
import "pages"
import net.khertan.python 1.0
import Sailfish.Silica.theme 1.0

ApplicationWindow
{
    id: appWindow
    initialPage: Component{ MainPage { } }
//    cover: Qt.resolvedUrl("cover/CoverPage.qml")

    InfoBanner {
        id: errorPanel
    }

    Python {
        id: sync
        property bool running: false

        function launch() {
            if (!running) {
                running = true;
                console.debug('Sync launched')
                threadedCall('ownnotes.launchSync', [])
            }
        }

        function get_last_sync_datetime() {
            console.debug('ownNores.qml:get_last_sync_datetime')
            return call('ownnotes.get_last_sync_datetime',[])
        }

        onFinished: {
            running = false;
            console.debug('Sync finished :' + sync.running)
            pyNotes.requireRefresh();
        }

        onMessage: {
            console.debug('Sync:'+data)
        }

        onException: {
            console.debug(type + ' : ' + data)
            onError('Error: ' + data);
            running = false;
        }

        Component.onCompleted: {
            addImportPath('/usr/share/ownNotes/python');
            importModule('ownnotes');
            if (call('ownnotes.getSetting', ['WebDav', 'startupsync']) === true) {
                launch();
            }
        }

    }

    Python {
        id: pyNotes
        signal requireRefresh()
        signal noteDeleted(string path)
        signal setCoverNote(string path)


        function saveNoteNew(category, name, text, colorized) {
            console.debug('ownNores.qml:saveNoteNew')
            var message = call('ownnotes.saveNoteNew', [category, name, text, colorized]);
            return message;
        }
        function readChangeslog() {
            console.debug('ownNores.qml:readChangeslog')
            return call('ownnotes.readChangeslog', []);
        }

        function loadNote(path) {
            console.debug('ownNores.qml:loadNote')
            var message = call('ownnotes.loadNote', [path, false]);
            return message;
        }
        function getNoteBody(path) {
            console.debug('ownNores.qml:getNoteBody')
            var message = call('ownnotes.getNoteBody', [path, false]);
            return message;
        }
        function loadPreview(path) {
            console.debug('ownNores.qml:loadPreview')
            var message = call('ownnotes.loadPreview', [path, false]);
            return message;
        }

        function nextNoteFile(path, offset) {
            console.debug('ownNores.qml:nextNoteFile')
            var next = call('ownnotes.nextNoteFile', [path, offset]);
            return next;
        }

        function setColors(title, subtitle, link) {
            console.debug('ownNores.qml:setColors')
            call('ownnotes.setColors', [title, subtitle, link]);
        }

        function listNotes(text) {
            console.debug('ownNores.qml:listNotes')
            threadedCall('ownnotes.listNotes', [text,]);
            console.log('listNotes called');
        }

        function getCategories() {
            console.debug('ownNores.qml:getCategories')
            var categories = call('ownnotes.getCategories', []);
            return categories;
        }

        function getNoteCategory(fileName) {
            console.debug('ownNores.qml:getNoteCategory')
            var categories = call('ownnotes.getNoteCategory', [fileName]);
            return categories;
        }
        function getNoteName(fileName) {
            console.debug('ownNores.qml:getNoteName')
            var categories = call('ownnotes.getNoteName', [fileName]);
            return categories;
        }
        function getNoteNameNoExtension(fileName) {
            console.debug('ownNores.qml:getNoteNameNoExtension')
            var categories = call('ownnotes.getNoteNameNoExtension', [fileName]);
            return categories;
        }
        function setCategory(path, category) {
            console.debug('ownNores.qml:setCategory')
            call('ownnotes.setCategory', [path, category]);
            requireRefresh();
        }

        function remove(path) {
            console.debug('ownNores.qml:remove')
            call('ownnotes.rm', [path, ]);
            noteDeleted(path);
        }

        function duplicate(path) {
            console.debug('ownNores.qml:duplicate')
            call('ownnotes.duplicate', [path, ]);
            requireRefresh();
        }

        function get(section, option) {
            return call('ownnotes.getSetting', [section, option])
        }

        function set(section, option, value) {
            console.debug('ownNores.qml:set')
            call('ownnotes.setSetting', [section, option, value])
        }

        function createNote() {
            console.debug('ownNores.qml:createNote')
            var path = call('ownnotes.createNote', []);
            return path;
        }
        function text_patern_url( text ) {
            console.debug('ownNores.qml:text_patern_url '+text);

            var true_false = call('ownnotes.text_patern_url', [text]);
            return true_false;
        }

        function text_patern_category( text ) {
            console.debug('ownNores.qml:text_patern_category '+text);

            var true_false = call('ownnotes.text_patern_category', [text]);
            return true_false;
        }

        function text_patern_filename( text ) {
            console.debug('ownNores.qml:text_patern_filename '+text);

            var true_false = call('ownnotes.text_patern_filename', [text]);
            return true_false;
        }

        function publishable() {
            console.debug('ownNores.qml:publishable')
            var canPublish = (call('ownnotes.getSetting', ['Scriptogram','userid']) !== '')
                || (call('ownnotes.getSetting', ['KhtCms','apikey']) !== '')
                || (call('ownnotes.getSetting', ['KhtCms','apikey']) !== '');
            return canPublish;
        }

        function publishToScriptogram(text) {
            console.debug('ownNores.qml:publishToScriptogram')
            call('ownnotes.publishToScriptogram', [text]);
        }

        function publishAsPostToKhtCMS(text) {
            console.debug('ownNores.qml:publishAsPostToKhtCMS')
            call('ownnotes.publishAsPostToKhtCMS', [text]);
        }

        function publishAsPageToKhtCMS(text) {
            console.debug('ownNores.qml:publishAsPageToKhtCMS')
            call('ownnotes.publishAsPageToKhtCMS', [text]);
        }

        function url_exist(text) {
            console.debug('ownNores.qml:publishAsPageToKhtCMS')
            call('ownnotes.publishAsPageToKhtCMS', [text]);
        }





        onException: {
            console.log('Type:' + type);
            console.log('Message:' + data);
            onError(type + ' : ' + data);
        }

        Component.onCompleted: {
            addImportPath('/usr/share/ownNotes/python');
            importModule('ownnotes');
        }
    }


    function onError(errMsg) {
        errorPanel.displayError(errMsg)
        console.log(errMsg)
    }

}


