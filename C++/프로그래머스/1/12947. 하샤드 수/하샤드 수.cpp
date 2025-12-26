#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int hashad =0;
    int hashad_ =x;
    while(x)
    {
        hashad += x%10;
        x/=10;
    }
    if(hashad_ % hashad)
        return false;
    else
        return true;
    
}