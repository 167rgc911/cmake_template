add_library(tlm_parser STATIC tlm_parser.cpp)

add_library(mock STATIC mock.cpp tlm_proc.cpp)

add_executable(tlm tlm.cpp)
