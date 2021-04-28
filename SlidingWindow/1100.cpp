#include <iostream>
#include <unordered_map>


using namespace std;

/*
����һ���ַ���?S���ҳ����г���Ϊ?K?�Ҳ����ظ��ַ����Ӵ������㷵��ȫ������Ҫ����Ӵ���?��Ŀ��

ʾ�� 1��

���룺S = "havefunonleetcode", K = 5
�����6
���ͣ�
������ 6 ������������Ӵ����ֱ��ǣ�'havef','avefu','vefun','efuno','etcod','tcode'��
ʾ�� 2��

���룺S = "home", K = 5
�����0
���ͣ�
ע�⣺K ���ܻ���� S �ĳ��ȡ�����������£����޷��ҵ��κγ���Ϊ K ���Ӵ���
?

��ʾ��

1 <= S.length <= 10^4
S �е������ַ���ΪСдӢ����ĸ
1 <= K <= 10^4

*/


//�̶������ƶ� ֱ��ƽ��
int numKLenSubstrNoRepeats(string S, int K) 
{
	int len = S.size();
	if(len < K)
		return 0;

	int ret_num = 0;
	for(int i=0 ;i <= len  -K ;i++)
	{
		/*����������һ��Ҫ���⣬��һ����ȫͳ��*/
		int okflag = 1;
		unordered_map<char,int> st;
		
		for(int j=i ;j < i+K;j++)
		{  	 
			char c = S[j];
			st[c]++;
			if(st[c]==2)
			{
				okflag = 0;
				break;
			}	   
		}
		if(okflag == 1)
			ret_num++;
	}
	return ret_num;
}





int main()
{

 //string s = "ccaabbb" ;
 string s = "havefunonleetcode";

 cout << numKLenSubstrNoRepeats(s,5) << endl;




	return 0;
}























































