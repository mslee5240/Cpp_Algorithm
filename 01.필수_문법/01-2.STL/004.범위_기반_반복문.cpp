#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    // vector
    vector<int> vec = {1, 2, 3, 4, 5};
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;   // 출력: 1 2 3 4 5
    

    // map
    map<string, int> fruitMap = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};
    for (const auto& pair : fruitMap) {
        cout << pair.first << "=" << pair.second << " ";
    }
    cout << endl;   // 출력: apple=1 banana=2 cherry=3
    

    // set 
    set<string> fruitSet = {"apple", "banana", "cherry"};
    for (const auto& fruit : fruitSet) {
        cout << fruit << " ";
    }
    cout << endl;   // 출력: apple banana cherry

    
    return 0;
}