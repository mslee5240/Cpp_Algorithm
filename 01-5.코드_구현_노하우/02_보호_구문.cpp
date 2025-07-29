#include <iostream>
#include <vector>
using namespace std;

// 보호 구문: 본격적인 로직을 진행하기 전 예외 처리 코드를 추가하는 기법

// 벡터의 값을 모두 더해서 N으로 나눈 값을 반환하는 함수
double get_avg(const vector<int>& arr, int N) {
    // 벡터가 비어 있는 경우
    if (arr.empty()) {
        return -1;
    }

    // N이 0인 경우
    if (N == 0) {
        return -1;
    }

    int sum = 0;
    for (int num : arr) {
        sum += num;
    }

    return sum / N;
}