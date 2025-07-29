#include <iostream>
#include <vector>
using namespace std;

// 빈 2차원 벡터 선언
vector<vector<int>> v1;

// 특정 크기로 초기화된 2차원 벡터
int rows = 3;
int cols = 4;
vector<vector<int>> v2(rows, vector<int>(cols));
// {{ ,  ,  ,  },
//  { ,  ,  ,  },
//  { ,  ,  ,  }}


// 특정 값으로 초기화된 2차원 벡터
int val = 9;
vector<vector<int>> v3(rows, vector<int>(cols, val)); // 3행 4열
// {{9, 9, 9, 9},
//  {9, 9, 9, 9},
//  {9, 9, 9, 9}}


// 초기화 리스트를 사용한 2차원 벡터 초기화
vector<vector<int>> v4 = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};