#include <QGuiApplication>
#include <QtQuick/QQuickView>
#include <QQmlApplicationEngine>

int main(int argc, char **argv) {
    QGuiApplication app(argc, argv);

    // Set Vulkan as the graphics API
    // Can we use QQuickWindow with QQmlApplicationEngine??
    QQuickWindow::setGraphicsApi(QSGRendererInterface::Vulkan);
    qDebug("Graphics API enum: %d", QQuickWindow::graphicsApi());

    QQmlApplicationEngine engine;
    QObject::connect(
            &engine,
            &QQmlApplicationEngine::objectCreationFailed,
            &app,
            []() { QCoreApplication::exit(-1); },
            Qt::QueuedConnection);
    engine.loadFromModule("VulkanTexture", "Main");

    return QGuiApplication::exec();
}
