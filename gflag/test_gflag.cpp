#include <iostream>
#include <gflags/gflags.h>

DEFINE_string(name, "jiangzhiyuan", "my name");

int main(int argc, char** argv) {
    google::ParseCommandLineFlags(&argc, &argv, true);
    std::cout << FLAGS_name << std::endl;

    google::ShutDownCommandLineFlags();
    return 0;
}