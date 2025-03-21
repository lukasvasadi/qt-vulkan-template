cmake_minimum_required(VERSION 3.30)
project(qtvulkan VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick)

qt_standard_project_setup(REQUIRES 6.6)

qt_add_executable(appqtvulkan
        main.cpp
        vulkantextureitem.cpp
        vulkantextureitem.h
        vulkantexturenode.cpp
        vulkantexturenode.h
)

qt_add_qml_module(appqtvulkan
        URI VulkanTexture
        QML_FILES
        Main.qml
        RESOURCES
        squircle.frag.spv
        squircle.vert.spv
        RESOURCE_PREFIX /scenegraph/vulkantexture
        NO_RESOURCE_TARGET_PATH
)

target_link_libraries(appqtvulkan PRIVATE
        Qt6::Core
        Qt6::Gui
        Qt6::Qml
        Qt6::Quick
)

include(GNUInstallDirs)

install(TARGETS appqtvulkan
        BUNDLE DESTINATION .
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
