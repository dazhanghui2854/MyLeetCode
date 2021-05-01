#include <iostream>
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;

/*
����һ�������� n �����������еĵ� n �

��������С���һ���������У������� 1 ��ʼ�������е�ÿһ��Ƕ�ǰһ���������

����Խ����������ɵݹ鹫ʽ����������ַ������У�

countAndSay(1) = "1"
countAndSay(n) �Ƕ� countAndSay(n-1) ��������Ȼ��ת������һ�������ַ�����
ǰ�������£�

1.     1
2.     11
3.     21
4.     1211
5.     111221
��һ�������� 1 
����ǰһ�������� 1 �� �� һ �� 1 �������� "11"
����ǰһ�������� 11 �� �� �� �� 1 �� ������ "21"
����ǰһ�������� 21 �� �� һ �� 2 + һ �� 1 �� ������ "1211"
����ǰһ�������� 1211 �� �� һ �� 1 + һ �� 2 + �� �� 1 �� ������ "111221"

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/count-and-say
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

*/


string  isValid(int n)
{

	if(n == 1)
		return "1";

	string tmp_pre = isValid(n -1);		//n-1�ַ���
	string ret = "" ;

	int len = tmp_pre.size();

	int count =1;						//��ʼֵΪ1
	for(int i=0;i < len;i++)
	{


		if(tmp_pre[i] == tmp_pre[i+1])
		{
			count++;
		}
		else
		{
			ret+= to_string(count)+tmp_pre[i] ;
			count =1;
		}

	}
	
	return ret;
}
	



int main()
{
	
	

	string ret = isValid(10);
	
	cout << ret << endl;



	return 0;
}



















































