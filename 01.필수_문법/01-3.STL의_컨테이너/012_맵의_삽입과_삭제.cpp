#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap;

    // 삽입
    myMap.insert(make_pair(1, "Apple"));
    myMap.insert({2, "Banana"});
    myMap[3] = "Cherry";

    for (const auto &pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    // 1: Apple
    // 2: Banana
    // 3: Cherry

    // 삭제
    myMap.erase(2);

    for (const auto &pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    // 1: Apple
    // 3: Cherry

    auto it = myMap.find(3);
    if (it != myMap.end()) {
        myMap.erase(it);
    }
    // 삭제 후 맵 출력
    for (const auto &pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    // 1: Apple

    return 0;
}
