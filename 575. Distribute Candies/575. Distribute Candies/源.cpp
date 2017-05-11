// 更多详情，以及思路请查看：http://blog.csdn.net/niub25/article/details/71662227
#include<iostream>
#include<vector>
#include <map>
#include <unordered_map>
using namespace std;

//unordered_map
class Solution1 {
public:
	int distributeCandies(vector<int>& candies) {
		int a = candies.size();
		int b = 0;
		unordered_map<int, int> d;
		for (int c : candies)
		{
			d[c]++;
			if (d[c] == 1)
			{
				b++;
			}
		}
		int c = a / 2;
		if (b > c)
		{
			return c;
		}
		else
			return b;
	}
};
//map
class Solution2 {
public:
	int distributeCandies(vector<int>& candies) {	
		int total = candies.size();
		map<int, int>candyKind;
		for (int i = 0;i<total;i++)
		{
			candyKind[candies[i]]++;
		}
		int kind = candyKind.size();
		if (kind <= total / 2) 
			return kind;
		else 
			return total / 2;
	}
};

int main()
{
	int num[] = { 1,1,2,2,3,3 };
	Solution1 a;
	int b = sizeof(num) / sizeof(num[0]);
	vector<int> nums(num, num + b);
	cout << a.distributeCandies(nums) << endl;
	system("pause");

}
