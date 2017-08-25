//详情及解析请参考：http://blog.csdn.net/niub25/article/details/71774269

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		int a = nums.size();
		int b = nums[0].size();
		if (a*b < r*c)
			return nums;

		vector<vector<int> > res(r, vector<int>(c, 0));

		for (int i = 0;i < a*b;i++)
		{
			res[i / c][i%c] = nums[i / b][i%b];
		}
		return res;
	}

	void printMatrix(vector<vector<int>> nums) {
		for (auto p : nums) {
			for (auto q : p)
				cout << q << " ";
			cout << endl;
		}
	}
};
int main()
{
	/*int a[2][2] = { (1,2),(3,4) };
	vector<int>nums(a, a + 2);
	Solution c;
	c.matrixReshape(nums, 2, 2);
	system("pause");*/
	vector<vector<int>> nums = { { 1,2 },{ 3,4 } }, res;
	Solution s;
	res = s.matrixReshape(nums, 2, 1);
	//s.printMatrix(nums);
	//s.printMatrix(res);
	system("pause");
}