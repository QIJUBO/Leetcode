//��������Լ�����������鿴��http://blog.csdn.net/niub25/article/details/71498623
#include<iostream>;
#include<vector>//����vector
#include <algorithm>//����sort
using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());//����
		int a = 0;
		for (int i = 0;i<nums.size();i = i + 2)//�˴�ҪС�Ĳ���д��i<=nums.size(),��Ϊ��i����nums.size()ʱ������ѭ��������nums[i]�ͳ���������ķ�Χ
		{
			a += nums[i];
		}
		return a;
	}

};

/*
C/C++ code
����ռ���ڴ��С
sizeof(array)
��������Ԫ�ظ���
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
