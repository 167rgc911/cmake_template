add_library(mock STATIC mock.cpp)
target_link_system_libraries(mock PRIVATE spdlog::spdlog)

add_executable(intro intro.cpp)
target_link_libraries(intro PRIVATE mock)
target_link_system_libraries(intro PRIVATE spdlog::spdlog)
