#include <iostream>
#include <vector>



using namespace std;


/*
����һ������ nums �ͻ������ڵĴ�С k�����ҳ����л�������������ֵ��

ʾ��:

����: nums = [1,3,-1,-3,5,3,6,7], �� k = 3
���: [3,3,5,5,6,7] 
����: 

  �������ڵ�λ��                ���ֵ
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
?

��ʾ��

����Լ��� k ������Ч�ģ����������鲻Ϊ�յ�����£�1 �� k ��?��������Ĵ�С��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/hua-dong-chuang-kou-de-zui-da-zhi-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

*/


vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
	vector<int> ret;


	int len = nums.size();
	if(len == 0)								//Ϊ�� ֱ�ӷ��ؿ�vector
		return ret;

	for( int i=0;i < len - k+1;i++)
	{
		int max = nums[i];						//Ҫ�����渳ֵ��һ��ֵ
		for(int j=i;j<=i+k -1;j++)
		{
			if(nums[j] > max)
			{
				max = nums[j];
			} 
		}
		ret.push_back(max);
	}
	return ret;
}




int main()
{
	int tmp[8] = {1,3,-1,-3,5,3,6,7};
	int k = 3;

	vector<int> st(tmp,tmp+8);

	
	vector<int> ret = maxSlidingWindow(st,k);

	for(int i=0;i < ret.size();i++)
	{
		cout << ret[i] <<endl ;
	}




	return 0;
}


























