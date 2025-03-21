//
// Created by lukasvasadi on 3/17/25.
//

#include "vulkantextureitem.h"

#include <QtGui/QScreen>
#include <QtQuick/QQuickWindow>
#include <QtQuick/QSGTextureProvider>
#include <QtQuick/QSGSimpleTextureNode>
#include <QVulkanFunctions>


VulkanTextureItem::VulkanTextureItem() {
    setFlag(ItemHasContents, true);
}

void VulkanTextureItem::invalidateSceneGraph() // Called on the render thread when the scenegraph is invalidated
{
    m_node = nullptr;
}

void VulkanTextureItem::releaseResources() // Called on the gui thread if the item is removed from scene
{
    m_node = nullptr;
}

QSGNode *VulkanTextureItem::updatePaintNode(QSGNode *node, UpdatePaintNodeData *) {
    auto *n = dynamic_cast<VulkanTextureNode *>(node);

    if (!n && (width() <= 0 || height() <= 0))
        return nullptr;

    if (!n) {
        m_node = new VulkanTextureNode(this);
        n = m_node;
    }

    m_node->sync();

    n->setTextureCoordinatesTransform(QSGSimpleTextureNode::NoTransform);
    n->setFiltering(QSGTexture::Linear);
    n->setRect(0, 0, width(), height());

    window()->update(); // Ensure getting to beforeRendering() at some point

    return n;
}

void VulkanTextureItem::geometryChange(const QRectF &newGeometry, const QRectF &oldGeometry) {
    QQuickItem::geometryChange(newGeometry, oldGeometry);

    if (newGeometry.size() != oldGeometry.size())
        update();
}

void VulkanTextureItem::setT(qreal t) {
    if (t == m_t)
        return;

    m_t = t;
    emit tChanged();

    update();
}


