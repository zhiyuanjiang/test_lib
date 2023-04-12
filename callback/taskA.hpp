#pragma once
#include <iostream>
#include <functional>
#include <memory>

#include "taskB.hpp"

class TaskA {
public:
    TaskA() {
        _taskb = std::make_shared<TaskB>();
    }
    void ProcessTaskB() {
        _taskb->SetCallBack([this](int val){
            std::cout << "val : " << val << std::endl;
        });

        _taskb->LaunchTaskB();
    }

private:
    std::shared_ptr<TaskB> _taskb{nullptr};
};