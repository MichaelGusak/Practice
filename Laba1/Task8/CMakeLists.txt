add_library(Task8Lib STATIC "")

target_sources(Task8Lib PRIVATE "../Task7/Task7_func.c")

add_executable(Laba1_Task8 "")

Target_sources(Laba1_Task8 PRIVATE "../Task7/Task7_main.c")

Target_link_libraries(Laba1_Task8 Task8Lib)

Target_include_directories(Laba1_Task8 PRIVATE "../Task7")