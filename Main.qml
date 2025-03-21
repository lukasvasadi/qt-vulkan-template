import QtQuick
import QtQuick.Window
import QtQuick.Controls
import VulkanTexture

ApplicationWindow {
    color: "#333"
    height: 400
    width: 600
    title: "QtVulkan"
    visible: true

    VulkanTextureItem {
        id: renderer
        anchors.fill: parent
        anchors.margins: 30

        SequentialAnimation on t {
            NumberAnimation {
                to: 1; duration: 2500; easing.type: Easing.InQuad
            }
            NumberAnimation {
                to: 0; duration: 2500; easing.type: Easing.OutQuad
            }
            loops: Animation.Infinite
            running: true
        }

        transform: [
            Rotation {
                id:
                    rotation; axis.x: 0; axis.z: 0; axis.y: 1; angle: 0; origin.x: renderer.width / 2; origin.y: renderer.height / 2; },
            Translate {
                id: txOut; x: -renderer.width / 2; y: -renderer.height / 2
            },
            Scale {
                id: scale; },
            Translate {
                id: txIn; x: renderer.width / 2; y: renderer.height / 2
            }
        ]
    }
}
