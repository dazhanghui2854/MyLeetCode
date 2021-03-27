#include <iostream>
#include <unordered_map>
#include <string>




using namespace std;





string SlidingWindow(string s, string t)
{
	unordered_map<char,int> need ;
	unordered_map<char,int> window ;


	/*need ��ֵ*/
	for(char c : t)
	{
		need[c]++;
	}

	int left = 0;
	int right = 0;
	int valid = 0;

	int start = 0;
	int target_len = -1 ;

	while(right < s.size())				//�����ѭ��
	{
		char c = s[right];
		right++;
		
		if(need.count(c))		//����� need�е��ַ�
		{
			window[c]++	;		//�ӵ�window������
			if(window[c] == need[c])
			{
				valid++;
			}
		}


		/*���ƴ���*/
		while(need.size() == valid)
		{
			/*���µ�ǰ������������ʼλ�ü�����*/
			start = left ;
			target_len = right - left ;
			
			char d = s[left] ;
			left++;
			if(need.count(d))//���d�Ƴ�����need�е�key
			{
				if(window[d] == need[d]) //��������ǰԪ�ش��ڱ���״̬
				{
					valid--;
				}
				window[d]--;
			}

		}

	}

	return  target_len == -1 ? "" : s.substr(start,target_len);
}





int main()
{

	string A = "ADBECFEBANC" ;
	string B = "ABC" ;

	string ret = SlidingWindow(A,B);



	cout << "ret:" << ret << endl;

	return 0;
}












































