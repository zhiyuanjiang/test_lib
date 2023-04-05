include_directories(/usr/local/include/)
link_libraries(/usr/local/lib/libglog.so)
link_libraries(/usr/local/lib/libgflags.so)

add_executable(test_glog test_glog.cpp)