#include <iostream>

using namespace std;
int solution(int n)
{
    int result = 0;
    while(true)
    {
        result+= n%10;
        n /= 10;
        if (n== 0)
        {
            return result;
        }
    }
}