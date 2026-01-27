#include <string>
#include <vector>
#include <numeric>

using namespace std;

string solution(int a, int b) {
    string days[7] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    vector<int> MonthDays = {0,31,29 ,31 ,30, 31 ,30, 31, 31, 30, 31 ,30 ,31};
    int TotalDays = accumulate(MonthDays.begin(), MonthDays.begin()+a,0) +b;
    return days[TotalDays%7];
}