#include "taskA.hpp"


int main() {
    // std::cout << "test" << std::endl;
    std::shared_ptr<TaskA> taska = std::make_shared<TaskA>();
    taska->ProcessTaskB();
    return 0;
}