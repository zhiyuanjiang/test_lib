//
// Created by yuan on 2022/7/24.
//

#include <iostream>
#include <glog/logging.h>

int main(int argc, char** argv) {

    google::ParseCommandLineFlags(&argc, &argv, true);  // 初始化 gflags
    google::InitGoogleLogging(argv[0]); //初始化 glog

    google::SetLogDestination(google::INFO, "/home/jzy/c++/test_lib/glog/log/INFO_");

    LOG(INFO) << "hello world";

    return 0;
}

