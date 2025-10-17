
// 다단계 칫솔 판매
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;



class Node
{
public:
    //Node* parentNode;
    int Cost = 0; // 누적 돈 , 기본생성자 통해서 0으로 초기화 시키기(문법적설탕) 
    string Name;
    string parentName;
public:
    Node(string name, string parent) // 생성자 문법적 설탕 inline 되어있는것.
        :Name(name), parentName(parent) //초기화
    {
        //대입
    }
    ~Node()
    {
        //delete parentNode; //이거 해야하나..?
    }

    // 이름 필요 없다 어차피 부모꺼 아니깐..-> 그래도 이름 필요할듯..
};



void calcFuncParent(unordered_map<string, Node*>& treeMap, string nodeName, int tenPercentCost)
{
    // "-" 노드 처리? 필요? 
    if (nodeName == "-")
        return;

    Node* nowNode = treeMap[nodeName];
    // 만약 자식으로 얻은 이익의 10% 가 1원 미만이면 자신의 Cost 모두 넣기, 아니면 다시 재귀함수
    
    int tenCost = static_cast<int>(tenPercentCost * 0.1);
    int nintyCost = tenPercentCost - tenCost; //; 이렇게 해야 로직 안꼬임..

    if (tenCost < 1)
    {
        nowNode->Cost += tenPercentCost; // 자신이 다 갖기
    }
    else
    {
        //nowNode->Cost += static_cast<int>(tenPercentCost * 0.9); // 90% 갖기 
        //calcFuncParent(treeMap, nowNode->parentName, static_cast<int>(tenPercentCost * 0.1)); // 다시 10% 재귀함수
        nowNode->Cost += nintyCost;
        calcFuncParent(treeMap, nowNode->parentName, tenCost);
    }
}

// 중요!!! 재귀함수 , ;데이터영역에 treeMap 만들어야하나.. 스택에서 treeMap 복사해서 전달해야하나..
void calcFunc(unordered_map<string, Node*>& treeMap, string nodeName ,int amount)
{
    // 현재 판 금액의 90% 는 현재 노드 Cost 에 저장하고 
    Node* sellerNode = treeMap[nodeName];
    int sellPrice = 100 * amount;


    // 10% 먼저 구하기 절삭 ; 이렇게 안하니깐 로직이 엄청 꼬였다;;
    int tenPercentCost = static_cast<int>(sellPrice * 0.1);

    // 위에 것에 따라 나머지 
    int nintyPercentCost = sellPrice - tenPercentCost;


    //treeMap[nodeName]->Cost = sellPrice / (10/9); // 14.94 이런 원이면 소수점 버리기 -> 나누기 연산
    //treeMap[nodeName]->Cost = static_cast<int>(sellPrice * 0.9);
    treeMap[nodeName]->Cost += nintyPercentCost; // ; +=  아 이거 실수했네 ㅡㅡ 

    // 10% 를 재귀함수에 넣기(루트까지 올라감)
    string parentNodeName = sellerNode->parentName;
    calcFuncParent(treeMap, parentNodeName, tenPercentCost);
}




vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount)
{

    //0. unordered_set 으로 빠르게 관리
    //unordered_set<Node*> treeSet;

    //0. Set말고 Map으로 해야할듯 string이 key가 되야 하니깐 value 는 노드포인터(노드의주소)
    unordered_map<string, Node*> treeMap;

    // 1. 주어진 값에 의해서 트리 만들기
    //  1) enroll 돌면서 부모 연결시키기 & referral도 동시에 돌기 
    for (int i = 0; i < enroll.size(); ++i)
    {
        Node* newNode = new Node(enroll[i], referral[i]); //노드 생성 및 초기화
        treeMap.emplace(enroll[i], newNode); // insert 말고 emplace이용
    }



    // 2. seller 순회하면서 재귀적으로 트리안의 cost 채우기 (함수 만들어서 재귀함수 ㄱㄱ) 
    for (int i = 0; i < seller.size(); ++i)
    {
        // seller[i] // 키값
        calcFunc(treeMap, treeMap[seller[i]]->Name, amount[i]); // 이 함수를 통해서 판매원 하나씩 접근 
    }

    // 3. 재귀적으로 부모 노드 값 


    vector<int> answer;

    // 3. treeMap ,enroll 순서대로 순회하면서 result에 담기!
    for (int i = 0; i < enroll.size(); ++i)
    {
        answer.emplace_back(treeMap[enroll[i]]->Cost);
    }

    return answer;
}


int main(void)
{
    vector<string> enroll = { "john", "mary", "edward", "sam", "emily", "jaimie", "tod", "young" };
    vector<string> referral = { "-", "-", "mary", "edward", "mary", "mary", "jaimie", "edward" };
    vector<string> seller = { "young", "john", "tod", "emily", "mary" };
    vector<int> amount = { 12, 4, 2, 5, 10 };

    vector<int> result = solution(enroll, referral, seller, amount);
    return 0;
}