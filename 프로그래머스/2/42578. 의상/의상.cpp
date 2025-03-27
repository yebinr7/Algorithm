#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes)
{
	// 행의 마지막 요소가 종류이고 
	// 그 종류마다 행벡터 size()-1 해서 map에 옮겨 담기

	unordered_map<string, int> clothMap;

	for (const auto row : clothes)
	{
		int clothNum = row.size() - 1;
		clothMap[row[clothNum]] += clothNum ; // 모자라면, 모자의 개수로 초기화  
	}

	

	// map이니깐 iter로 순회 or accumulate 사용

	int n = 1;
	for (auto iter = clothMap.begin(); iter != clothMap.end(); ++iter)
	{
		n *= ((*iter).second +1); // 누적해서 곱하기  +1 하는 안입은 경우 추가!!!
	}



	int answer = n - 1; // 모든 옷입는 경우의수에서 -1(하나도 안입은 경우) 빼면 뭐라도 입은 경우의 수가 나온다..
	return answer;
}

int main(void)
{
	int answer1 = solution({ 
		{"yellow_hat", "headgear"}, 
		{ "blue_sunglasses", "eyewear"}, 
		{ "green_turban", "headgear"} });
	return 0;
}