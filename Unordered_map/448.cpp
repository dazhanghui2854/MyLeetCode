#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>


using namespace std;


/*
缁欏畾涓€涓寖鍥村湪聽 1 鈮?a[i] 鈮?n (聽n = 鏁扮粍澶у皬 ) 鐨?鏁村瀷鏁扮粍锛屾暟缁勪腑鐨勫厓绱犱竴浜涘嚭鐜颁簡涓ゆ锛屽彟涓€浜涘彧鍑虹幇涓€娆°€?

鎵惧埌鎵€鏈夊湪 [1, n] 鑼冨洿涔嬮棿娌℃湁鍑虹幇鍦ㄦ暟缁勪腑鐨勬暟瀛椼€?

鎮ㄨ兘鍦ㄤ笉浣跨敤棰濆绌洪棿涓旀椂闂村鏉傚害涓篛(n)鐨勬儏鍐典笅瀹屾垚杩欎釜浠诲姟鍚? 浣犲彲浠ュ亣瀹氳繑鍥炵殑鏁扮粍涓嶇畻鍦ㄩ澶栫┖闂村唴銆?

绀轰緥:

杈撳叆:
[4,3,2,7,8,2,3,1]

杈撳嚭:
[5,6]

鏉ユ簮锛氬姏鎵ｏ紙LeetCode锛?
閾炬帴锛歨ttps://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array
钁椾綔鏉冨綊棰嗘墸缃戠粶鎵€鏈夈€傚晢涓氳浆杞借鑱旂郴瀹樻柟鎺堟潈锛岄潪鍟嗕笟杞浇璇锋敞鏄庡嚭澶勩€?
*/


vector<int> losenumber(vector<int>& arr)
{
	int len = arr.size();
	int tmp = 0;
	vector<int> ret;

	unordered_map<int,int> st;

	for(int i=0;i < len ;i++)
	{

		tmp = arr[i] ;
		st[tmp]++ ;
	}

	for(int i=1;i <= len ;i++)
	{

		if(st.count(i) ==0)					//璇ey鍦ㄥ搱甯岃〃涓?
		{
			ret.push_back(i);
		}
	}

	return ret;

}






int main()
{


	int tmp[8] ={1,2,2,3,3,5,6,7} ;

	vector<int> arr(tmp,tmp+8);

	vector<int> ret = losenumber(arr);

	int len = ret.size();

	for(int i=0 ; i < len;i++)

	{
		printf("%d\n",ret[i]);
	}



	return 0;
}





























































