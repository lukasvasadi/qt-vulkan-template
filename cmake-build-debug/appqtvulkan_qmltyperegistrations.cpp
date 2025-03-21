/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <vulkantextureitem.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_VulkanTexture()
{
    qmlRegisterModule("VulkanTexture", 254, 0);
    qmlRegisterTypesAndRevisions<VulkanTextureItem>("VulkanTexture", 254);
    qmlRegisterAnonymousType<QQuickItem, 254>("VulkanTexture", 254);
    qmlRegisterModule("VulkanTexture", 254, 254);
}

static const QQmlModuleRegistration registration("VulkanTexture", qml_register_types_VulkanTexture);
