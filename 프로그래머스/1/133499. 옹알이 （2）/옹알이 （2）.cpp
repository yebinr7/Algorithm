#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

//{ "ayaye", "uuu", "yeye", "yemawoo", "ayaayaa" }
int solution(vector<string> babbling) 
{
	//yeyeye 
	//b.find("ye")는 한번 밖에 못찾는다. 원기옥 모아서 하는법 vs  find 이용 
	//find 이용해서 찾고 삭제해버리기? 
	//찾았으면 while -> 못찾으면 탈출...
	int answer = 0;
	
	//string words[] = {"aya", "ye", "woo", "ma"};
	for (const auto& bb : babbling)//복사해서 받아오기 //최대 100번 반복  한문자열당 30 -> 3000번..
	{
		//순서대로 처리하는 수 밖에...
		// ye ma woo ..
		string str = "";
		string before = "";
		bool bPossible = false;
		for (size_t i = 0; i < bb.size(); i++)
		{
			//문자 하나씩 받다가
			//문자 완성되면 ok
			//이전에 완성된 문자랑 현재 문자랑 같다면 종료 
			str += bb[i]; //yemawoox
			
			if (str == "aya")
			{
				bPossible = true;
				if (before == "aya")
				{
					bPossible = false;
					break;
				}
					
				before = "aya";
				str.clear();
			}
			else if (str == "ye")
			{
				bPossible = true;
				if (before == "ye")
				{
					bPossible = false;
					break;
				}
				before = "ye";
				str.clear();
			}
			else if (str == "woo")
			{
				bPossible = true;
				if (before == "woo")
				{
					bPossible = false;
					break;
				}
				before = "woo";
				str.clear();
			}
			else if (str == "ma")
			{
				bPossible = true;
				if (before == "ma")
				{
					bPossible = false;
					break;
				}
				before = "ma";
				str.clear();
			}
			else
				bPossible = false;
		}
		if (bPossible)
			answer++;
	}
	return answer;
}