#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    int length = to_string(n).size();
    vector<int> answer;
    for(int i =0; i< length; i++)
    {
        answer.push_back(n%10);
        n/= 10;
    }
    return answer;
}