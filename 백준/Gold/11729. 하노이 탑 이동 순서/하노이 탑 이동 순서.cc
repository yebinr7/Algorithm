#include <iostream>

int move(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return move(n - 1) + 1 + move(n - 1);
}

int moveLog(int n, int from, int to, int via)
{
    if (n == 1)
    {
        std::cout << from << " " << to << "\n";
        return 1;
    }

    int count = 0;
    count += moveLog(n - 1, from, via, to);
    std::cout << from << " " << to << "\n";
    count += 1;
    count += moveLog(n - 1, via, to, from);
    return count;
}

void solution(int n)
{
    std::cout << move(n) << "\n";
    moveLog(n, 1, 3, 2);
}

int main(void)
{
    int n;
    std::cin >> n;
    solution(n);
    return 0;
}