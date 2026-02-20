#include <vector>
#include <iostream>
#include<cmath>
using namespace std;

vector<bool> is_prime(int n)
{
	vector<bool> vec(n, true);
	
	vec[1] = false;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (vec[i] == false) continue;
		for (int j = 2; i * j <= n; j++) vec[i * j] = false;
	}
	return vec;
}

int solution(vector<int> nums) {
	vector<bool> Primechk = is_prime(3000);
	int answer = 0;
	for (int i = 0; i < nums.size(); i++)
		for (int j = i + 1; j < nums.size(); j++)
			for (int k = j + 1; k < nums.size(); k++)
				if (Primechk[nums[i] + nums[j] + nums[k]] == true) 
                {
                    answer++;
                }
	return answer;
}