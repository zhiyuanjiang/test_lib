#pragma once
#include <iostream>
#include <functional>
#include <thread>
#include <memory>
#include <chrono>

class TaskB {
public:
    TaskB() = default;
    ~TaskB() {
        if(_task_thread.joinable()){
            _task_flag = false;
            _task_thread.join();
        }
    }

    void SetCallBack(const std::function<void(int)>& cb) {
        _launch_cb = cb;
    }

    void LaunchTaskB() {
        std::cout << "launch task b" << std::endl;
        int cnt = 0;
        while(_task_flag){
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            if(_launch_cb != nullptr){
                _launch_cb(cnt++);
            }
        }
    }

private:
    std::function<void(int)> _launch_cb{nullptr};
    std::thread _task_thread;

    bool _task_flag = true;
};