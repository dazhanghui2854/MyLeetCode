#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>


using namespace std;



//ɾ������ָ��Ԫ�أ�ԭ�أ��������³���
int removeElement(vector<int>& arr ,int target)
{
	int len = arr.size();
	int fast = 0;
	int slow = 0;

	int cur = 0;
	for(int fast =0 ;fast < len  ;fast++)						//��һֵ����
	{
		if(arr[fast] != target)									//�жϷ�����
		{
			arr[slow] = arr[fast];												//�̵ļ�¼�ø�ֵ������������������λ���±�
			slow++;
		}
	}
	return slow   		//!!!!!!!!!���� +1 =���ȣ�  ��ʱindex : slow -1 ;
}







int main()
{



	return 0;
}


































































