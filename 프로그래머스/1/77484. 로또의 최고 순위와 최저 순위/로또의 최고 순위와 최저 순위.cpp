#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int free =0;
    int cnt = 0;
    sort(lottos.begin(), lottos.end(), greater<int>());
    
    for(int a: lottos)
    {
        if(a == 0)
        {
            free++;
        }
        else
        {
            auto it = find(win_nums.begin(),win_nums.end(), a);
            if(it != win_nums.end())
            {
                cnt++;
            }
        }
    }
    auto get_rank = [](int count) {
        if (count == 6) return 1;
        if (count == 5) return 2;
        if (count == 4) return 3;
        if (count == 3) return 4;
        if (count == 2) return 5;
        return 6; // 0개, 1개는 모두 6위
    };
    
   return {get_rank(cnt + free), get_rank(cnt)};
}