#include <iostream>
#include <unordered_map>


using namespace std;


//固定长度移动 直接平移
int numKLenSubstrNoRepeats(string S, int K) 
{
	int len = S.size();
	if(len < K)
		return 0;

	int ret_num = 0;
	for(int i=0 ;i <= len  -K ;i++)
	{
		/*这两个变量一定要在外，做一次完全统计*/
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























































