#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>

/*
����һ���ַ���������Ҫ��ת�ַ�����ÿ�����ʵ��ַ�˳��ͬʱ�Ա����ո�͵��ʵĳ�ʼ˳��

?

ʾ����

���룺"Let's take LeetCode contest"
�����"s'teL ekat edoCteeL tsetnoc"
?

��ʾ��

���ַ����У�ÿ�������ɵ����ո�ָ��������ַ����в������κζ���Ŀո�

*/


using namespace std;


/*��ת�ַ��������е���*/

string reverseWords(string s) 
{
	int len = s.size();
	if(len == 0 || len ==1)
		return s;

	int left = 0;
	int right = 0;

	/*��߽�Ϊÿ�μ��������ַ��������*/
	while(left < len)
	{
		if(s[left]!=' ')
		{
			/*��ʼ�����*/
			right = left;
			while(s[right]!=' ' && right < len)
			{
				right++;
			}
			/*��ʱright��Ϊ' '*/
			reverse(s.begin()+left,s.begin()+right);
			/*���û���������ʼλ��*/
			left = right;
		}
		else
		{
			left++;
		}
	}
	return s;
}

	



int main()
{
	
	
	string s = "zhang hui ha ha";
	
	
	cout << reverseWords(s) << endl;



	return 0;
}



















































