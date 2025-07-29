#include <iostream>
using namespace std;

// 주어진 수량과 가격에 따라 총 가격을 계산하는 함수
double total_price(int quantity, double price) {
    double total = quantity * price;  // total 계산
    if (total > 100) {  // total이 100보다 크면
        return total * 0.9; // 조기 반환
    }

    return total;
}
// ...생략...(수많은 작업들)
int main() {
    cout << total_price(4, 50) << endl;

    return 0;
}

// 조기 반환 -> 이후 예외 처리를 하지 않아도 됨.