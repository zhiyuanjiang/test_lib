//
// Created by yuan on 2022/12/19.
//
#include <iostream>
#include <Eigen/Dense>

#include <cmath>

struct Quaternion {
    double w, x, y, z;
};

struct EulerAngles {
    double roll, pitch, yaw;
};

// this implementation assumes normalized quaternion
// converts to Euler angles in 3-2-1 sequence
EulerAngles ToEulerAngles(Quaternion q) {
    EulerAngles angles;

    // roll (x-axis rotation)
    double sinr_cosp = 2 * (q.w * q.x + q.y * q.z);
    double cosr_cosp = 1 - 2 * (q.x * q.x + q.y * q.y);
    angles.roll = std::atan2(sinr_cosp, cosr_cosp);

    // pitch (y-axis rotation)
    double sinp = std::sqrt(1 + 2 * (q.w * q.x - q.y * q.z));
    double cosp = std::sqrt(1 - 2 * (q.w * q.x - q.y * q.z));
    angles.pitch = 2 * std::atan2(sinp, cosp) - M_PI / 2;

    // yaw (z-axis rotation)
    double siny_cosp = 2 * (q.w * q.z + q.x * q.y);
    double cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
    angles.yaw = std::atan2(siny_cosp, cosy_cosp);

    return angles;
}

double ToDegree(double x) {
    return x*180/M_PI;
}

int main() {

    Quaternion q;
    q.w = 0.986;
    q.x = 0.164;
    q.y = 0;
    q.z = 0;
    EulerAngles eu = ToEulerAngles(q);
    std::cout << ToDegree(eu.pitch) << " "
              << ToDegree(eu.roll) << " "
              << ToDegree(eu.yaw) << std::endl;

    return 0;
}