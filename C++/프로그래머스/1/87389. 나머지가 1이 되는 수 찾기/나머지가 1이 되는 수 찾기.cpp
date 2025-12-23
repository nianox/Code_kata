#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    n = n-1;
    for(int i =2; i <= n; i++)
    {
        if(n%i ==0)
        {
            return i;
        }
    }
}