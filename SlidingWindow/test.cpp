#include <iostream>
#include <unordered_map>
#include <string>




using namespace std;





string SlidingWindow(string s, string t)
{
	unordered_map<char,int> need ;
	unordered_map<char,int> window ;


	/*need 赋值*/
	for(char c : t)
	{
		need[c]++;
	}

	int left = 0;
	int right = 0;
	int valid = 0;

	int start = 0;
	int target_len = -1 ;

	while(right < s.size())				//最外层循环
	{
		char c = s[right];
		right++;
		
		if(need.count(c))		//如果是 need中的字符
		{
			window[c]++	;		//扔到window窗口中
			if(window[c] == need[c])
			{
				valid++;
			}
		}


		/*左移窗口*/
		while(need.size() == valid)
		{
			/*记下当前满足条件的起始位置及长度*/
			start = left ;
			target_len = right - left ;
			
			char d = s[left] ;
			left++;
			if(need.count(d))//如果d移除的是need中的key
			{
				if(window[d] == need[d]) //！！！当前元素处于饱和状态
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












































