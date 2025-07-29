#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;

    Point(int x, int y) : x(x), y(y) {}
};

// 사용자 정의 비교 함수
bool compare(const Point &a, const Point &b) {
    if (a.x == b.x) {
        return a.y < b.y; // x 좌표가 같으면 y 좌표가 작은 순서대로 정렬
    }
    return a.x < b.x;   // x 좌표가 작은 순서대로 정렬
}

int main() {
    vector<Point> points = {{3, 4}, {1, 2}, {3, 1}, {2, 5}};

    // points 벡터를 사용자 정의 기준으로 정렬
    sort(points.begin(), points.end(), compare); // 비교 함수의 반환값이 false일 때 원소의 위치를 바꿈

    // 정렬된 벡터 출력
    for (const Point &p : points) {
        cout << "(" << p.x << ", " << p.y << ") ";
    }
    cout << endl;
    // 출력 : (1, 2), (2, 5), (3, 1), (3, 4)

    return 0;
}