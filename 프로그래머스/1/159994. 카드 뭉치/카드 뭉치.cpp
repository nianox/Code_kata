#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    for(string &a : goal)
    {
        if(cards1[0] == a)
        {
            cards1.erase(cards1.begin());
        }
        else if(cards2[0] == a)
        {
            cards2.erase(cards2.begin());
        }
        else
        {
            return "No";
        }
    }
    return "Yes";

    
}