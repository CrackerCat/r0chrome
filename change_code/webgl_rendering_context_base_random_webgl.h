#include <iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int random_func(int arr_len){
    return rand() % arr_len;
}

String get_raondom_gpu(){
    srand(int(time(0)));
    String gpu_list[] = {
        "ANGLE (NVIDIA, NVIDIA GeForce RTX 3080 Direct3D11 vs_5_0 ps_5_0, D3D11)",
        "ANGLE (NVIDIA, NVIDIA GeForce RTX 3070 Direct3D11 vs_5_0 ps_5_0, D3D11)",
        "ANGLE (NVIDIA, NVIDIA GeForce RTX 3060 Direct3D11 vs_5_0 ps_5_0, D3D11)",
    };
    int length = sizeof(gpu_list) / sizeof (gpu_list[0]);
    return gpu_list[random_func(length)];
}

float get_random_float(){
    srand((unsigned int)time(NULL));
    float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX) / 2;
    return r;
}