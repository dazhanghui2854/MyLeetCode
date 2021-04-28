#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>


/*
����һ�����������һ������?k���ж��������Ƿ����������ͬ������?i?��?j��ʹ��?nums [i] = nums [j]������ i �� j?�Ĳ�� ����ֵ ����Ϊ k��

?
ʾ��?1:

����: nums = [1,2,3,1], k = 3
���: true
ʾ�� 2:

����: nums = [1,0,1,1], k = 1
���: true
ʾ�� 3:

����: nums = [1,2,3,1,2,3], k = 2
���: false

*/




using namespace std;


//�ж��������Ƿ�����ظ�����
bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
	int len= nums.size();
	bool ret = false;
	int left = 0;
	int right = 0;
	unordered_map<int,int> st;
	/*һֱ����*/
	while(right < len)
	{
		int tmp = nums[right];
		st[tmp]++;
		if(st[tmp] == 2)
		{
			if(right - left < k+1)
			{
				ret = true;
				return ret;
			}
		}
		else
		{
			/*�����ǰ���ڴ�С��û���ٽ�*/
			if(right - left < k )
			{
				right++;
			}
			else //���˻����Ѵﵽ�ٽ磬һֱ�ƶ��󴰿�ֱ������
			{
				while(right - left > k || right - left == k)
				{
					int tmp = nums[left];
					st[tmp]--;
					/*��ü���*/
					if(st[tmp ==0])
						st.erase(tmp);
					left++;
				}
				/*right��һֱ����*/
				right++;
			}
		}
	}
	return ret;
}





int main()
{
	vector<int> arr = {1,2,3,1};
	printf("ret : %d\n",containsNearbyDuplicate(arr,3));
	return 0;
}


















































