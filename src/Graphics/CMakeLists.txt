file(GLOB cpp_file CONFIGURE_DEPENDS *.cpp */*.cpp)

project(Graphics)

add_library(${PROJECT_NAME}
    ${cpp_file}
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include"
)
# add_subdirectory(${CMAKE_SOURCE_DIR}/external/glfw)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    glfw
    glad
)