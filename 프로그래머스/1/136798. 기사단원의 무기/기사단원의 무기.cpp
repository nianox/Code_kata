#include <string>
#include <vector>

using namespace std;


vector<int> get_divisor_count(int n)
{
	vector<int> vec(n+1, 0);

	vec[1] = 1;
	for(int j = 2; j<= n; j++)
		for (int i = 1; i*i <= j; i++)
		{
			if (j % i == 0)
			{
				if (i * i == j)
				{
					vec[j] += 1;
				}
				else
				{
					vec[j] += 2;
				}
			}
			
		}
	return vec;
}


int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> divisor_arr = get_divisor_count(number);
    
for (int i = 1; i <= number; i++)
{
	if (divisor_arr[i] <= limit)
	{
		answer += divisor_arr[i];
	}
	else
	{
		answer += power;
	}
}
        return answer;
}