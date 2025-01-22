#include <string>
#include <vector>

using namespace std;
int solution(vector<vector<int>> sizes) 
{
    int maxX = 0;
    int maxY = 0;
    //행렬을 다시 배치 0열에 큰값 1열에 작은값
    for (size_t rows = 0; rows < sizes.size(); rows++)
    {
        if (sizes[rows][0] < sizes[rows][1])
            std::swap(sizes[rows][0], sizes[rows][1]);
        if (sizes[rows][0] > maxX)
            maxX = sizes[rows][0];

        if (sizes[rows][1] > maxY)
            maxY = sizes[rows][1];
    }
    return maxX * maxY;
}