#include <string>
#include <vector>

using namespace std;
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{   //arr1의 벡터 [0][1][2]...
    //      [0]행.[0][1]..
    //      [1]행.[0][1]..
    //      [2]행.[0][1]..
    //arr1[0][0] + arr2[0][0]
    //vector<vector<int>> answer; //계속 오류난 이유
	//여기서 사이즈 미리 늘려야 한다.
	
	//std::vector<std::vector<int>> answer{ { 0, 0 },{ 0,0 } }; // answer에 하나의 빈 벡터를 추가(활성화됨)
	std::vector<std::vector<int>> answer;
	//resize와 reserve, = reserve 는 초기화 안되나봄?
	size_t row/*행*/ = arr1.size();
	size_t col/*열*/ = arr1[0].size();
	answer.resize(row);
	for (size_t i = 0; i < row; i++)
	{
		answer[i].resize(col);
		for (size_t j = 0; j < col; j++)
		{
			//answer[j].resize(size);
			answer[i][j] = arr1[i][j] + arr2[i][j];//덮어쓰기, 초기화 안된상태에서 인덱스접근 불가인가봄
			//answer[i].emplace_back(arr1[i][j] + arr2[i][j]);
		}
	}
	return answer;
}
