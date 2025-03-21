//
// Created by lukasvasadi on 3/17/25.
//

#ifndef QTVULKAN_VULKANTEXTUREITEM_H
#define QTVULKAN_VULKANTEXTUREITEM_H

#include "vulkantexturenode.h"

#include <QtQuick/QQuickItem>
#include <QtQuick/QQuickWindow>
#include <QVulkanInstance>
#include <QVulkanFunctions>

class VulkanTextureItem : public QQuickItem {
Q_OBJECT

    Q_PROPERTY(qreal t READ t WRITE setT NOTIFY tChanged)
    QML_ELEMENT

public:
    VulkanTextureItem();

    qreal t() const { return m_t; }

    void setT(qreal t);

signals:

    void tChanged();

protected:
    QSGNode *updatePaintNode(QSGNode *, UpdatePaintNodeData *) override;

    void geometryChange(const QRectF &newGeometry, const QRectF &oldGeometry) override;

private slots:

    void invalidateSceneGraph();

private:
    VulkanTextureNode *m_node = nullptr;

    qreal m_t = 0;

    void releaseResources() override;
};


#endif //QTVULKAN_VULKANTEXTUREITEM_H
