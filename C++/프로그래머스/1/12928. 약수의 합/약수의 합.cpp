#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int result = 0;
    for(int i =1; i*i <= n; i++)
    {
        if (n% i == 0)
        {
            result +=i;
            if(i != n/i)
            {
                result += n/i;
            }
        }
    }
    return result;
}