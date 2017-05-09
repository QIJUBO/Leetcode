//题的内容以及解析步骤请查看：http://blog.csdn.net/niub25/article/details/71498623
#include<iostream>;
#include<vector>//运用vector
#include <algorithm>//运用sort
using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());//排序
		int a = 0;
		for (int i = 0;i<nums.size();i = i + 2)//此处要小心不能写成i<=nums.size(),因为当i等于nums.size()时，继续循环，这样nums[i]就超出了数组的范围
		{
			a += nums[i];
		}
		return a;
	}

};

/*
C/C++ code
计算占用内存大小
sizeof(array)
计算数组元素个数
sizeof(array) / sizeof(array[0])
*/
int main()
{
	int num[] = { 1,4,2,3 };
	Solution a;
	int b = sizeof(num) / sizeof(num[0]);
	vector<int> nums(num,num +4 );
	cout << a.arrayPairSum(nums) << endl;
	system("pause");
}
