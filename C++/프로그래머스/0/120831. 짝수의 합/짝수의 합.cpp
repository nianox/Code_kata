#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if(n %2 ==1)
        n = n-1;
    if (n == 2) 
        return 2;
    if (n == 1)
        return 0;
    return (n+2)*(n*10/4)/10;
}
