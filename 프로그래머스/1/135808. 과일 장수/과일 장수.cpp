#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer =0;
    int len = score.size();
    sort(score.begin(), score.end());
    for(int i =1; len-m*i >=0; i++) 
    {
        answer+= m*score[len - m*i];
    }
    return answer;
    
}