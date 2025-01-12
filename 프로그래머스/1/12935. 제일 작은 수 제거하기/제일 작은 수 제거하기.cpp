#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
	//중복된 수 없다. 최소 1개는 벡터 안에 들어있다.
	//1. 받은 배열을 오름차순 하기-> 이렇게 하면 원본 배열 순서 바뀌니깐 X
	//2. 0번째 인덱스 삭제하기 원본 건들기? 
	//3. 숫자가 하나밖에 없다면 삭제되서 빈배열이 될텐데 그땐 -1 채워서 벡터 리턴



	if (arr.size() == 1)//1개 배열일땐
	{
		arr.pop_back();
		arr.emplace_back(-1);
	}
	else
	{
		//제일 작은수 계속 업데이트 하자
		int minNum = arr[0];
		for (auto v : arr)
		{
			if (v < minNum)
				minNum = v;
		}
		//제일 작은 수 찾았으니 지우기
		//1. 그 인덱스 이터레이터 얻기
		auto iter = find(arr.begin(), arr.end(), minNum);

		arr.erase(iter);//마지막 요소가 제일 작을시 iter 다음꺼 end()라서 오류날수도? 

	}
	return arr;
}