cmake_minimum_required(VERSION 3.16)
project(DerpEngineRedux)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

add_library(glad
    external/glad/src/glad.c
)

target_include_directories(glad PUBLIC
    external/glad/include
    external/stb_image
    external/tomlplusplus
)

add_library(DerpEngineRedux
    src/main.cpp
    src/application.cpp
    src/renderer/opengl/opengl.cpp
    src/renderer/renderer.cpp
    src/window.cpp
    src/object.cpp
)

target_include_directories(DerpEngineRedux PUBLIC
    include
)

target_link_libraries(DerpEngineRedux PUBLIC
    glad
    glfw
    OpenGL::GL
    glm::glm
)

add_subdirectory(demo)

if (WIN32)
    target_link_libraries(DerpEngineRedux PRIVATE opengl32)
endif()