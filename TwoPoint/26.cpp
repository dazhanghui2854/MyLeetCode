#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>


using namespace std;



//ɾ�������ظ���Ԫ�أ�ԭ�أ��������³���
int removeElement(vector<int>& arr)
{
	int len = arr.size();
	int fast = 0;
	int slow = 0;

	int cur = 0;
	for(int fast =0 ;fast < len -1 ;fast++)						//��һֵ����
	{
		if(arr[fast] != arr[fast + 1])							//������
		{
			slow++;												//�̵ļ�¼�ø�ֵ������������������λ���±�
			arr[slow] = arr[fast + 1];
		}
	}
	return slow+1  		//���� = index+1
}







int main()
{



	return 0;
}


































































