add_executable(tdd_app main.c mult.c)

target_include_directories(tdd_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
