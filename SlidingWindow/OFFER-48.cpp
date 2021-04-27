#include <iostream>
#include <unordered_map>


using namespace std;


int lengthOfLongestSubstring(string s) 
{
	int len = s.size();
	

	int left = 0;
	int right = 0;
	int ret_len = 0;
	unordered_map<char,int>st;
	for(left=0;left<len;left++)
	{
		if(left!=0)
		{
			char c = s[left - 1];
			if(st[c] == 1)
				st.erase(c);
			else
				st[c]--;
		}

		while(right < len)
		{
			char c = s[right];
			st[c]++;
			
			if(st[c] == 1)
			{
				right++;
			}
			else	//�ұ߽粻��ͷ�����������pop���ڣ��ƶ��󴰿�
			{
				st[c]--;
				break;
			}

		}
		ret_len = max(ret_len,right - left);
	}
	return ret_len;
}






int main()
{

 //string s = "ccaabbb" ;
 string s = "abcabcbb";

 cout << lengthOfLongestSubstring(s) << endl;




	return 0;
}
























































