//我们已经知道了将N个整数按从小到大排序的冒泡排序法。本题要求将此方法用于字符串序列，并对任意给定的K（<N），
//	输出扫描完第K遍后的中间结果序列。
//
//	输入格式：
//	输入在第1行中给出N和K（1≤K<N≤100），此后N行，每行包含一个长度不超过10的、仅由小写英文字母组成的非空字符串。
//
//	输出格式：
//	输出冒泡排序法扫描完第K遍后的中间结果序列，每行包含一个字符串。
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a[120];
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				string t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		if (i == k - 1)
			break;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	return 0;
}