#include <iostream>
#include <unordered_map>
#include <vector>
#include <limits.h>


/*
���������������飬һ����һ���̣��̵�Ԫ�ؾ�����ͬ���ҵ��������а������������е�Ԫ�ص���������飬�����˳���޹ؽ�Ҫ��

����������������˵���Ҷ˵㣬���ж�����������������飬������˵���С��һ�����������ڣ����ؿ����顣

ʾ�� 1:

����:
big = [7,5,9,0,2,1,3,5,7,9,1,1,5,8,8,9,7]
small = [1,5,9]
���: [7,10]
ʾ�� 2:

����:
big = [1,2,3]
small = [4]
���: []
*/


using namespace std;


vector<int> shortestSeq(vector<int>& big, vector<int>& small) 
{
    int len = big.size();
    vector<int> res;
    //need����¼������������Ҫ���ǵ����֣������Ӧ�ĸ���
    unordered_map<int, int> need;
	unordered_map<int, int> window;
	//Ԥ��������������С����,�����ֵ������ big������small����һ�µ��²���ֵ
	int minLen = INT_MAX;
    // ������������
	int okCount = 0;
	
    // ����Ԥ����ͳ����Ҫ���ǵ��ַ��ж��ٸ�
    for (auto& e : small) 
	{
        need[e]++;
    }

    // �������ڣ�lָ�򴰿���߽磬rָ�򴰿��ұ߽�
    int left = 0;
	int right = 0;
    for (right = 0; right < len; ++right) 
	{
		int tmp = big[right];
		window[tmp]++;
        // need�д�����ֵ&&��ǰ��ֵ����Ҫ�ĸ���=1��diff��һ
        if (need.find(tmp) != need.end()) 
        {
        	if(need[tmp] == window[tmp])
        	{
				okCount++;
			}
		}

        // ���okCount���������������󴰿�
        while (okCount == small.size()) 
		{
			/*�ȸ�ֵĿǰ�����left,right,*/
            if (right - left+1  < minLen) 
			{
                minLen = right - left+1 ;
				/*�ȸ�ֵ��ǰ������������ʱֵ����ס��˸�ֵ��ʽ*/
                res = {left, right};
				
            }
			
			int tmp = big[left];
            if (need.find(tmp) != need.end()) 
            {
            	/*okCount����*/
				if(need[tmp] == window[tmp])
				{
					okCount--;
				}
			}
			/*һ��Ҫִ��*/
			window[tmp]--;
            left++;
        }
    }
	cout << "len :" << minLen << endl;

    return res;
}




int main()
{

	//vector<int> big = {7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7};
	//vector<int> small = {1, 5, 9};
	vector<int> big = {1,2,3};
	vector<int> small = {1 ,2,3};
	vector<int> ret;
	ret = shortestSeq(big,small);
 	cout << ret[0] << endl;
	cout << ret[1] << endl;


	return 0;
}
























































