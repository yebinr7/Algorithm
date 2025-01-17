#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main(void) {
    int n; //가로
    int m; //세로 
    cin >> n >> m;
    for (size_t i = 0; i < m; i++)
    {

        for (size_t j = 0; j < n; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
