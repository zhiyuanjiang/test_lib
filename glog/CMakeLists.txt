include_directories(/usr/local/include/glog)
include_directories(/usr/local/include/gflags)

link_directories(/usr/local/lib)

add_executable(test_glog test_glog.cpp)
target_link_libraries(test_glog -lglog -lgflags)