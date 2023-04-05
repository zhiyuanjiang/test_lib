
include_directories(/usr/local/include/)
link_libraries(/usr/local/lib/libgflags.a)

add_executable(test_gflag test_gflag.cpp)
target_link_libraries(test_gflag -lpthread)