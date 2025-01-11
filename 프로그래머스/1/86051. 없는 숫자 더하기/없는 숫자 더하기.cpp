#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    
    //0~9까지 없는 숫자 더해서 리턴
    //인덱스 배열 하나 만들기 그 인덱스 배열이 곧 숫자
    int arr[10]={0,}; //0으로 모두 초기화
    
    for(int i = 0; i<numbers.size(); i++)
    {
        arr[numbers[i]] +=1;
    }
    int answer = 0;
    for(int i=0; i<10; i++)
    {
        if(arr[i]==0)
        {
            answer += i;
        }
    }
    return answer;
}