#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <stack>




using namespace std;

/*
ʾ�� 1 :

����: "00110011"
���: 6
����: ��6���Ӵ�������ͬ����������1��0����0011������01������1100������10������0011�� �� ��01����

��ע�⣬һЩ�ظ����ֵ��Ӵ�Ҫ�������ǳ��ֵĴ�����

���⣬��00110011��������Ч���Ӵ�����Ϊ���е�0����1��û�������һ��
ʾ�� 2 :

����: "10101"
���: 4
����: ��4���Ӵ�����10������01������10������01�������Ǿ�����ͬ����������1��0��
?

��ʾ��

s.length?��1��50,000֮�䡣
s?ֻ������0����1���ַ���

*/

int countBinarySubstrings(string s) 
{
	vector<int> st;
	int len = s.size();
	int index = 0;

	/*�����ص�*/
	while(index < len)
	{
		char c = s[index];
		int count = 0;
		while(c == s[index] && index < len)
		{
			count++;
			index++;
		}
		/*�����μ��������push ,vector push_back*/
		st.push_back(count);
	}

	int ret = 0;
	/*���� len - 1��*/
	for (int i = 0; i < st.size() - 1; ++i) 
	{
		ret += min(st[i], st[i + 1]);
	}
	return ret;
}

	



int main()
{
	string s = "00110011" ;
	cout << countBinarySubstrings(s) << endl;
	return 0;
}



















































