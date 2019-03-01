// premier.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

void Chapter10()
{
	//10.1
	vector <int> ivec{ 1,2,1,2,4,5,6,1,2,1 };
	int val = 1;
	int countn = 0;
	for (auto it : ivec)
	{
		if (it == val)
			++countn;
	}
	cout << count(ivec.cbegin(),ivec.cend(),val) << endl;

	//10.2
	list <string> slist{ "a","b","a","c" };
	cout << count(slist.cbegin(), slist.cend(), "a") << endl;
}

int main(int argc,char *argv[])
{
	Chapter10();
    return 0;
}

