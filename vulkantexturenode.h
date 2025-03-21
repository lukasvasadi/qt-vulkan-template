//
// Created by lukasvasadi on 3/19/25.
//

#ifndef QTVULKAN_VULKANTEXTURENODE_H
#define QTVULKAN_VULKANTEXTURENODE_H

#include <QtGui/QScreen>
#include <QtQuick/QQuickWindow>
#include <QtQuick/QSGTextureProvider>
#include <QtQuick/QSGSimpleTextureNode>
#include <QFile>
#include <QVulkanInstance>
#include <QVulkanFunctions>


class VulkanTextureNode : public QSGTextureProvider, public QSGSimpleTextureNode {
Q_OBJECT

public:
    explicit VulkanTextureNode(QQuickItem *item);

    ~VulkanTextureNode() override;

    QSGTexture *texture() const override;

    void sync();

private slots:

    void render();

private:
    enum Stage {
        VertexStage,
        FragmentStage
    };

    void prepareShader(Stage stage);

    bool buildTexture(const QSize &size);

    void freeTexture();

    bool createRenderPass();

    bool initialize();

    QQuickItem *m_item;
    QQuickWindow *m_window;
    QSize m_size;
    qreal m_dpr{};

    QByteArray m_vert;
    QByteArray m_frag;

    VkImage m_texture = VK_NULL_HANDLE;
    VkDeviceMemory m_textureMemory = VK_NULL_HANDLE;
    VkFramebuffer m_textureFramebuffer = VK_NULL_HANDLE;
    VkImageView m_textureView = VK_NULL_HANDLE;

    bool m_initialized = false;

    float m_t{};

    VkPhysicalDevice m_physDev = VK_NULL_HANDLE;
    VkDevice m_dev = VK_NULL_HANDLE;
    QVulkanDeviceFunctions *m_devFuncs = nullptr;
    QVulkanFunctions *m_funcs = nullptr;

    VkBuffer m_vbuf = VK_NULL_HANDLE;
    VkDeviceMemory m_vbufMem = VK_NULL_HANDLE;
    VkBuffer m_ubuf = VK_NULL_HANDLE;
    VkDeviceMemory m_ubufMem = VK_NULL_HANDLE;
    VkDeviceSize m_allocPerUbuf = 0;

    VkPipelineCache m_pipelineCache = VK_NULL_HANDLE;

    VkPipelineLayout m_pipelineLayout = VK_NULL_HANDLE;
    VkDescriptorSetLayout m_resLayout = VK_NULL_HANDLE;
    VkPipeline m_pipeline = VK_NULL_HANDLE;

    VkDescriptorPool m_descriptorPool = VK_NULL_HANDLE;
    VkDescriptorSet m_ubufDescriptor = VK_NULL_HANDLE;

    VkRenderPass m_renderPass = VK_NULL_HANDLE;
};


#endif //QTVULKAN_VULKANTEXTURENODE_H
