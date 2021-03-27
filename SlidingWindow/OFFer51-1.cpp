#include <iostream>
#include <vector>



using namespace std;




vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
	vector<int> ret;


	int len = nums.size();
	if(len == 0)								//为空 直接返回空vector
		return ret;

	for( int i=0;i < len - k+1;i++)
	{
		int max = nums[i];						//要在外面赋值第一个值
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


























