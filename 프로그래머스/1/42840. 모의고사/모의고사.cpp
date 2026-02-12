#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> supo1 = { 1, 2, 3, 4, 5 };
    vector<int> supo2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> supo3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    vector<int> scores(3, 0); 


    for (int j = 0; j < answers.size(); j++) {
        if (answers[j] == supo1[j % supo1.size()]) scores[0]++;
        if (answers[j] == supo2[j % supo2.size()]) scores[1]++;
        if (answers[j] == supo3[j % supo3.size()]) scores[2]++;
    }

    int max_score = max({scores[0], scores[1], scores[2]});

    vector<int> answer;
    for (int i = 0; i < 3; i++) {
        if (scores[i] == max_score) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}