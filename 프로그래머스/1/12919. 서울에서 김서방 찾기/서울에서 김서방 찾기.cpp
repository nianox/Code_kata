#include <string>
#include <vector>
#include<algorithm>

using namespace std;

string solution(vector<string> seoul) {
    auto a = find(seoul.begin(), seoul.end(), "Kim");
    string result = "김서방은 " + to_string(a - seoul.begin()) + "에 있다";
    return result;
}