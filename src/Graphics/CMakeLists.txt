file(GLOB cpp_file CONFIGURE_DEPENDS *.cpp */*.cpp)

add_library(Graphics
    ${cpp_file}
)

target_include_directories(Graphics
    PUBLIC
    "include"
)