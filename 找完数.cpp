//所谓完数就是该数恰好等于除自身外的因子之和。例如：6 = 1 + 2 + 3，其中1、2、3为6的因子。
//本题要求编写程序，找出任意两正整数m和n之间的所有完数。
//
//输入格式：
//输入在一行中给出2个正整数m和n（1<m≤n≤10000），中间以空格分隔。
//
//输出格式：
//逐行输出给定范围内每个完数的因子累加形式的分解式，每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”，
//其中完数和因子均按递增顺序给出。若区间内没有完数，则输出“None”。
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	bool flag = true;
	for (int i = m; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum == i)
		{
			flag = false;
			cout << i << " = 1";
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
					cout << " + " << j;
			}
			cout << endl;
		}
	}
	if (flag)
		cout << "None" << endl;
	return 0;
}