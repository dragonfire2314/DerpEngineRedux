cmake_minimum_required(VERSION 3.16)
project(DerpEngineReduxDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DerpEngineReduxDemo
    main.cpp
)

target_include_directories(DerpEngineReduxDemo PRIVATE
    include
    DerpEngineRedux
)

target_link_libraries(DerpEngineReduxDemo PRIVATE
    DerpEngineRedux
    # glad
    # glfw
    # OpenGL::GL
    # glm::glm
)