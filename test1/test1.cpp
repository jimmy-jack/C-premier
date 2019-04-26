// test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "test1.h"
//#include "test2.h"
#include <string>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>

#include <algorithm>
#include <numeric> 

#include <iterator>

#include <map>
#include <set>

#include <memory>

//#define NDEBUG
#include <cassert>
using namespace std;


void Chapter2()
{
	//sum
	/*cout << "Enter two numbers" << endl;
	int v0 = 0, v2 = 0;
	cin >> v0 >> v2;
	cout << "The sum of " << v0 << " and " << v2 << " is " << v1 + v2 << endl;*/

	//while
	/*int value,sum = -1;
	while (cin >> value)
	sum += value;
	cout << sum << endl;*/

	//type
	//unsigned char c = -2;
	//signed char c1 = 192;
	//cout << (int)c << "   " << (int)c1 << endl;
	//unsigned u = 9;
	//int i = -43;
	//cout << u + i <<  "  = "<< pow(1,32) - 42 + 10 << endl;

	//type1
	//unsigned u = 9, u2 = 42;
	//cout << u1 - u << endl;	//32
	//cout << u - u1 << " =  " << (unsigned)(pow(2,32) - 32) << endl;	
	//int i = 9, i2 = 42;
	//cout << i1 - i << endl;//32
	//cout << i - i1 << endl;//-32
	//cout << i - u << endl;	//-1
	//cout << u - i << endl;	//-1

	//1.8
	//cout << "2M" << '\n';
	//cout << '1' << '\t' << 'M' << '\n';

	//var initial
	//int unit0 = 1;
	//int unit1 = { 2 };
	//int unit2{ 3 };
	//int unit3(4);
	//cout << unit0 << " " << unit2 << " " << unit3 << " " << unit4 << endl;

	//1.18
	//int obj = 0, *pObj = &obj,_obj = 100;
	//cout << pObj << "  " << obj << endl;
	//*pObj = 1;
	//cout << pObj << "  " << obj << endl;
	//pObj = &_obj;
	//cout << pObj << "  " << *pObj << endl;

	//cout << "bufsize = " << bufsize << endl;

	//const * &
	//const int ic;
	/*int i0 = 42;
	const int &r0 = i1;
	i0 = 41;
	cout << "r0 = " << r1 << endl;*/

	//typeDef
	//using INT = int;
	//INT gg = 0;
	//cout << "gg=" << gg << endl;
	//typedef int *pint;
	//const pint ptr0 = &gg;
	////ptr0 += 1;   //ptr1 is const pointer!
	//cout << "*ptr0 = " << *ptr1 << endl;

	//auto
	//	const int i = 41;
	//	auto j = i;		//int j
	//	const auto &k = i;
	//	auto *p = &i;
	//	const auto j1 = i, &k2 = i;
	/*int a = 2, b = 5;
	decltype (a) c = a;
	decltype ((b)) d = a;
	++c;
	++d;
	cout << a << " " << b << " " << c << " " << d << endl;*/

}

bool Arr_compare(const int * abeg, const int * aend, const int *bbeg, const int *bend)
{
	if ((aend - abeg) == (bend - bbeg))
	{
		for (auto pa = abeg, pb = bbeg; pa != aend && pb != bend; pa++, pb++)
		{
			if (*pa != *pb)
				return false;
		}
		return true;
	}
	return false;
}

void Chapter3()
{
	//string ------------------------------------------------------------
	//	string s1; string s2(s1); string s2 = s1; string s3("value"); string s3 = "value"; string s4(10, 'c');
	//	string line;
	//	while (getline(cin, line))
	//		if(!line.empty())
	//			cout << line << endl;

	//3.4
	//string str1, str2;
	//cin >> str1 >> str2;
	//if (str1 == str2)
	//	cout << "str1 == str2" << endl;
	//else if (str1 > str2)
	//	cout << str1 << endl;
	//else
	//	cout << str2 << endl;
	//string str3, str4;
	//cin >> str3 >> str4;
	//if (str3.size() == str4.size())
	//	cout << "str3.size == str4.size" << endl;
	//else if (str3.size() > str4.size())
	//	cout << str3 << endl;
	//else
	//	cout << str4 << endl;

	//3.5
	//	string strin,str_long;
	//	while (cin >> strin )
	//	{
	//		str_long += strin + ' ';
	//	}
	//	cout << str_long << endl;

	//3.6
	//string str("some strings");
	//for (auto &c : str)
	//{
	//	c = 'X';
	//}
	//cout << str << endl;
	////3.7
	//string str2("123 456");
	//for (char *pc = &str2[0]; *pc != '\0'; pc++)
	//{
	//	*pc = 'X';
	//}
	//cout << str2 << endl;
	////3.10
	//string str3("Hello_World !!!!");
	//string str_result;
	//for (auto &c : str3)
	//{	
	//	if (!ispunct(c))
	//		str_result += c;
	//}
	//cout << str_result << endl;

	//const string s = "dsadsa";
	//for (auto c : s)
	//{
	//	c = 'x';　
	//}


	//vector------------------------------------------
	//init
	//vector <int> v1;
	//vector <int> v2(v1);
	//vector <int> v3 = v1;
	//vector <int> v4(4, 1);
	//vector <int> v5(5);
	//vector <int> v6{ 1,2,3 };
	//vector <int > v7 = { 1,2,3 };
	//vector <string> svec(10, "hi"); //vector <string> svec{10, "hi"}; 
	//3.14
	//vector <int> v_ints;
	//int num;
	//while (cin >> num)
	//	v_ints.push_back(num);
	//vector <string> v_str;
	//string str;
	////cin.get();
	//cin.clear();
	//cin.sync();
	//while (cin >> str)
	//{
	//	v_str.push_back(str);
	//}
	//3.17
	//	vector <string> vec_str;
	//	string str;
	//	while (cin >> str)
	//		vec_str.push_back(str);
	//	for (auto &s : vec_str)
	//	{
	//		for (auto &c : s)
	//		{
	//			c = toupper(c);
	//		}
	//	}
	//	for (auto s : vec_str)
	//		cout << s << endl;
	//3.20
	/*vector <int> vec_int;
	int num;
	while (cin >> num)
	{
	vec_int.push_back(num);
	}
	int sum = 0;
	for (decltype(vec_int.size()) i = 0;i < vec_int.size();i++)
	{
	sum += vec_int[i];
	if (i % 2 == 1)
	{
	cout << sum << endl;
	sum = 0;
	}

	}
	cout << "---------------------------" << endl;
	for (int i = 0; i < vec_int.size() / 2; i++)
	{
	int _size = vec_int.size() - 1;
	cout << vec_int[i] + vec_int[_size - i] << endl;
	}*/

	//iterator-------------------------------------
	//	string str("some strings");
	//	auto it = str.begin();
	//	while (it != str.end())
	//	{
	//		*it = toupper(*it);
	//		it++;
	//	}
	//	cout << str << endl;
	//	vector <const int> ve;
	//	const vector <int> ve2;
	//	vector <int> ve3;
	//	ve.push_back(1);
	//ve2.push_back(2);//wrong
	//  vector <int> :: iterator it;
	//3.22
	//vector <string> text;
	//string word;
	//while (cin >> word)
	//	text.push_back(word);
	//for (auto itv = text.begin(); itv != text.end(); itv++)
	//{
	//	for (auto itc = itv->begin(); itc != itv->end(); itc++)
	//	{
	//		*itc = toupper(*itc);
	//	}
	//}
	//for (auto itv = text.cbegin(); itv != text.cend(); itv++)
	//{
	//	cout << *itv << endl;
	//}
	//

	//array--------------------------------------------------
	//int arrayA[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//3.36
	//int arrayA[] = { 1,2,3,4,5,6 };
	//int arrayB[] = { 1,2,3,4,5,6 };
	//if (Arr_compare(begin(arrayA), end(arrayA), begin(arrayB), end(arrayB)))
	//	cout << "arrayA == arrayB" << endl;
	//else
	//	cout << "array != arrayB" << endl;
	//
	string str = { "dsadsadas" };
	//char *ch = str.c_str();
	const char *ch = str.c_str();
	char *ch_s = "dsa";
	str = ch_s;
	cout << str << endl;
}

void Chapter4()
{
	//operator
	//4.21
	//vector <int> ivec = { 1,2,3,4,5,6,7 };
	//for (auto &i : ivec)
	//{
	//	i = (i % 2 == 1) ? i * 2 : i;
	//	cout << i << endl;
	//}
	//4.22
	/*int grade;
	cin >> grade;
	string finalGrade1 = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	cout << "finalGrade1 = " << finalGrade1 << endl;
	string finalGrade2;
	if (grade > 90)
	finalGrade2 = "high pass";
	else if (grade >= 75)
	finalGrade2 = "pass";
	else if (grade >= 60)
	finalGrade2 = "low pass";
	else
	finalGrade2 = "fail";
	cout << "finalGrade2 = " << finalGrade2 << endl;*/

	//sizeof
	//int arrayA[2];
	//cout << sizeof(arrayA) << endl;
	//vector <int> ivec{ 1,2,3,4 ,5,6,7,8,9};
	//cout << sizeof(ivec) << endl;
	//4.28
	/*cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;

	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;*/
	//int x[10]; int *p = x;
	//cout << sizeof(p) << endl;



}

bool IsPre(const vector<int> &ivec1, const vector<int> &ivec2)
{
	if (ivec1.size() > ivec2.size())
		return false;
	else
	{
		for (auto i = 0; i < ivec1.size(); ++i)
		{
			if (ivec1[i] != ivec2[i])
				return false;
		}
		return true;

	}
}

void Chapter5()
{
	//5.9
	//string str;
	/*char ch;
	unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while (cin >> ch)
	{
	if (ch == 'a' || ch == 'A')	++aCnt;
	if (ch == 'e' || ch == 'E')	++eCnt;
	if (ch == 'i' || ch == 'I')	++iCnt;
	if (ch == 'o' || ch == 'O')	++oCnt;
	if (ch == 'u' || ch == 'U')	++uCnt;
	}
	cout << "aCnt = " << aCnt << endl;
	cout << "eCnt = " << eCnt << endl;
	cout << "iCnt = " << iCnt << endl;
	cout << "oCnt = " << oCnt << endl;
	cout << "uCnt = " << uCnt << endl;*/

	//5.14
	/*vector <string> svec;
	string str;
	int maxCnt = 0,cnt = 0;
	string maxStr,lastStr;
	while (cin >> str)
	{
	svec.push_back(str);
	}
	vector <string> ::iterator sIter = svec.begin();
	if (sIter != svec.end())
	lastStr = svec[0];
	while (sIter != svec.end())
	{
	if (*sIter == lastStr)
	++cnt;
	else
	{
	if (cnt >= maxCnt)
	{
	maxCnt = cnt;
	maxStr = lastStr;
	}
	cnt = 1;
	lastStr = *sIter;
	}
	++sIter;
	}
	if (maxCnt > 1)
	cout << "word " << "\"" << maxStr << "\"" << " occur " << maxCnt << " times" << endl;
	else
	cout << "no words constantly appear" << endl;*/

	//5.17
	/*vector <int> ivec1{ 0,1,1,2,3,5,8,9 }, ivec2{0,1,1,2,3,5,8};
	if (ivec1.size() <= ivec2.size())
	{
	if (IsPre(ivec1, ivec2))
	cout << "true" << endl;
	else
	cout << "false" << endl;
	}
	else
	{
	if (IsPre(ivec2, ivec1))
	cout << "true" << endl;
	else
	cout << "false" << endl;
	}*/

	//5.19
	/*string str1, str2;
	cin >> str1 >> str2;
	do
	{
	cout << ((str1 < str2) ? str1 : str2) << endl;
	} while (cin >> str1 >> str2);*/

	//5.20 5.21
	/*string strIn, lastStr;
	bool flag = false;
	while (cin >> strIn && !strIn.empty())
	{
	if (!isupper(strIn[0]))
	continue;
	if (strIn == lastStr)
	{
	cout << strIn << " repeats " << endl;
	flag = true;
	break;
	}
	lastStr = strIn;
	}
	if (!flag)
	cout << "no repeat word" << endl;*/

	//TRY
	int a = 1, b = 2;
	try
	{
		if (a != b)
			throw runtime_error("a != b");
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
	}
}

void mySwap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

bool HasUpper(const string &str)
{
	for (auto c : str)
	{
		if (isupper(c))
			return true;
	}
	return false;
}

void ToLower(string &str)
{
	for (auto &c : str)
	{
		if (isupper(c))
			c = tolower(c);
	}
}

int Int_compare(int i, const int *p)
{
	return (i > *p) ? i : *p;
}

void Pint_swap(int *&p1, int *&p2)
{
	int *temp = p1;
	p1 = p2;
	p2 = temp;
}

void error_msg(initializer_list <string> il)
{
	for (auto beg = il.begin(); beg != il.end(); ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
}

int sum_init(initializer_list<int> ili)
{
	int sum = 0;
	for (auto beg = ili.begin(); beg != ili.end(); ++beg)
	{
		sum += *beg;
	}
	return sum;
}

//6.38
int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd) & arrPtr(int i)
{
	return (i % 2) ? odd : even;
}

void Chapter6()
{
	//parameter
	//6.10
	/*int a = 1, b = 2;
	mySwap(&a, &b);
	cout << a << "  " << b << endl;*/

	//6.17
	/*cout << (HasUpper("aBc deqwe") ? "has upper" : "has no upper") << endl;
	string str("AABBCC");
	ToLower(str);
	cout << str << endl;*/

	//6.21
	//int a = 1, b = 2;
	//int *p = &b;
	//cout << Int_compare(a, p) << endl;

	//6.22
	/*int a = 1, b = 2;
	int *p1 = &a, *p2 = &b;
	Pint_swap(p1, p2);
	cout << *p1 << "  " << *p2 << endl;*/

	//ke bian xing can
	//initializer_list<int> li;
	//error_msg({ "I","am","foolish!" });
	////6.27
	//cout << sum_init({ 1,2,3,4 }) << endl;

	//6.36
	//string ( &func() ) [10];
	////6.37
	//typedef string strArray[10];
	//strArray &func();
	//auto func()->string(&)[10];
	//string strArr[10];
	//decltype(strArr)& func();

	//debug help
	//assert(1 < 0);
	cerr << "Error: " << __FILE__ << " : in function " << __func__
		<< " at line " << __LINE__ << endl
		<< "	Compiled on " << __DATE__ << " at " << __TIME__
		<< endl;

}

//int main()
//{
//	
//	//Chapter3();
//	//Chapter4();
//	//Chapter5();
//	Chapter6();
//	return 0;
//}

class Sales_data
{
	friend istream& read(istream &is, Sales_data &item);
	friend ostream& print(ostream &os, const Sales_data &item);

	//func
public:
	//Sales_data() = default;
	///Sales_data(const string &s) : bookNo(s) {}
	Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) { cout << "3 parameters construct" << endl; }
	//Sales_data(istream & is)
	//{
	//	read(is, *this);
	//}

	//7.41 weituo gouzao
	Sales_data() : Sales_data("", 0, 0) { cout << "default construct" << endl; }
	Sales_data(const string &s) : Sales_data(s, 0, 0) { cout << "1 parameter construct" << endl; }
	Sales_data(istream &is) : Sales_data() { cout << "read from cin to construct" << endl; read(is, *this); }

	//7.14
	//Sales_data() { bookNo = ""; units_sold = 0; revenue = 0; }

	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data &rhs);

private:
	double avg_price() const;

	//var
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};

istream& read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

ostream& print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold <<
		" " << item.revenue;
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

//7.4
struct Person
{
	string name;
	string address;

	string const& GetName() const { return name; }
	const string & GetAddress() const { return address; }

	//7.15
	Person() = default;
	Person(const string &sn, const string &sa) : name(sn), address(sa) {}
};


//7.32
class Screen;
class Window_mgr
{
public:
	using ScreenIndex = vector<Screen> ::size_type;
	inline void clear(ScreenIndex i);

private:
	//vector<Screen> screens{ Screen(5,5,' ') };
	vector<Screen> screens;
};

class Screen
{
	friend class Window_mgr;
	//friend void Window_mgr::clear(ScreenIndex i);
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos h, pos w) : width(w), height(h), contents("") {}
	Screen(pos h, pos w, char ch) : width(w), height(h), contents(w*h, ch) {}
	Screen &move(pos r, pos c)
	{
		pos row = r * width;
		cursor = row + c;
		return *this;
	}
	Screen &set(char ch)
	{
		contents[cursor] = ch;
		return *this;
	}
	Screen &display(ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(ostream &os) const
	{
		do_display(os);
		return *this;
	}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;

	void do_display(ostream &os) const { os << contents; }
};



//7.31
class X;
class Y;
class X
{
	Y *py = nullptr;
};
class Y
{
	X obj_x;
};

//7.57
class Account
{
public:
	void calculate() { amount += amount * intersetRate; }
	static double rate() { return intersetRate; }
	static void rate(double newRate) { intersetRate = newRate; }

private:
	string owner;
	double amount;
	static double intersetRate;
	static constexpr double todayRate = 42.42;
	static double initRate() { return todayRate; }
};
double Account::intersetRate = initRate();

int Chapter7()
{
	//7.1
	/*Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
	Sales_data trans;
	while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
	{
	if (total.bookNo == trans.bookNo)
	{
	total.units_sold += trans.units_sold;
	total.revenue += trans.revenue;
	}
	else
	{
	cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	total = trans;
	}
	}
	cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else
	{
	cerr << "No data?!" << endl;
	return -1;
	}
	*/

	//
	/*Sales_data item1, item2;
	read(cin, item1);
	print(cout, item1);
	cout << endl;

	read(cin, item2);
	print(cout, item2);
	cout << endl;

	Sales_data item3 = add(item1, item2);
	print(cout, item3);
	cout << endl;*/

	//7.11
	/*Sales_data item1;
	print(cout, item1);
	cout << endl;
	Sales_data item2("tego");
	print(cout, item2);
	cout << endl;
	Sales_data item3("tego", 5, 5);
	print(cout, item3);
	cout << endl;
	Sales_data item4(cin);
	print(cout, item4);
	cout << endl;*/

	//7.27
	/*Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << endl;
	myScreen.display(cout);
	cout << endl;*/

	//7.41
	/*Sales_data sd1("sale1", 1, 1);
	cout << endl<< endl;
	Sales_data sd2;
	cout << endl<< endl;
	Sales_data sd3("sale3");
	cout << endl<< endl;
	Sales_data sd4(cin);
	cout << endl<< endl;*/

	//converting constructor
	string null_book = "0-000-00000-0";
	Sales_data item;
	item.combine(null_book);
	print(cout, item);
	cout << endl;
	Sales_data item2 = null_book;	//拷贝初始化
	print(cout, item2);
	cout << endl;

	return 0;
}

//8.1
istream& readAndPrint(istream &is)
{
	string buf;
	while (is >> buf)
	{
		cout << buf << endl;
	}
	is.clear();
	return is;
}

//8.4
ifstream& readStringLine(ifstream &ifs, const string sfile, vector <string> &svec)
{
	ifs.close();
	ifs.open(sfile, ifstream::in);
	if (ifs)
	{
		string str;
		while (getline(ifs, str))
		{
			svec.push_back(str);
		}
	}
	ifs.close();
	return ifs;
}
//8.5
ifstream& readString(ifstream &ifs, const string sfile, vector <string> &svec)
{
	ifs.close();
	ifs.open(sfile, ifstream::in);
	if (ifs)
	{
		string str;
		while (ifs >> str)
		{
			svec.push_back(str);
		}
	}
	ifs.close();
	return ifs;
}

void Chapter8()
{
	//iostate
	//auto old_state = cin.rdstate();
	//cin.clear();
	////process_input(cin);
	//cin.setstate(old_state);

	//8.1
	//istream &is =  readAndPrint(cin);
	//cout << is.rdstate() << endl;

	//output buffer
	/*cout << "hi!" << endl;
	cout << "hi!" << flush;
	cout << "hi!" << ends;*/

	//fstream
	/*string ifile = "test.txt";
	ifstream in(ifile);
	if (!in)	cout << "no file" << endl;
	int a, b,c;
	in >> a >> b >> c;
	ofstream out;*/

	//8.4
	/*ifstream in;
	string ifile = "test.txt";
	vector <string> svec;
	readStringLine(in, ifile, svec);
	for (auto s : svec)
	{
	cout << s << endl;
	}*/

	//8.5
	/*ifstream in;
	string ifile = "test.txt";
	vector <string> svec;
	readString(in, ifile, svec);
	for (auto s : svec)
	{
	cout << s << endl;
	}

	ofstream out;
	string ofile = "test.out";
	out.close();
	out.open(ofile);
	if (out)
	{
	for (auto s : svec)
	{
	out << s << endl;
	}
	}
	out.close();*/

	//sstream
	//8.9
	//ifstream in;
	/*string str = "test.txt";
	istringstream iss(str);
	readAndPrint(iss);
	*/
	//8.10
	string ifile("test.txt");
	ifstream in(ifile);
	string str;
	vector <string> svec;
	while (getline(in, str))
	{
		svec.push_back(str);
	}
	for (auto s : svec)
	{
		istringstream iss(s);
		string word;
		while (iss >> word)
		{
			cout << word << endl;
		}
	}

}

//9.4
bool FindInt(vector<int>::const_iterator it1, vector<int>::const_iterator it2, int x)
{
	if (it1 > it2)
		return FindInt(it2, it1, x);
	else
	{
		while (it1 != it2)
		{
			if (*it1 == x)
			{
				return true;
			}
			++it1;
		}
		return false;
	}
}
//9.5
vector<int>::const_iterator FindInt2(vector<int>::const_iterator it1, vector<int>::const_iterator it2, int x)
{
	if (it1 > it2)
		return FindInt2(it2, it1, x);
	else
	{
		while (it1 != it2)
		{
			if (*it1 == x)
			{
				return it1;
			}
			++it1;
		}
		return it2;
	}
}

//9.28
void InsertStr(forward_list<string> &sfl, const string &str1, const string &str2)
{
	auto prev = sfl.cbefore_begin();
	auto curr = sfl.cbegin();
	while (curr != sfl.cend())
	{
		if (*curr == str1)
		{
			curr = sfl.insert_after(curr, str2);
			return;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	sfl.insert_after(prev, str2);
}

//9.51
class Date
{
public:
	Date() = default;
	Date(const string &md, const string &y);
	Date(const string &dmy);

private:
	unsigned year = 0;
	unsigned month = 1;
	unsigned day = 1;
};

void Chapter9()
{
	//9.2
	//	list <deque <int> > i_deque_list;
	//
	//	//9.4
	//	vector<int> v1{ 1,2,3 };
	//	int x = 4;
	//	cout << (FindInt(v1.end(), v1.begin(), x) ? "has x" : "no x") << endl;

	//9.11
	//vector <int> otherVec;
	//vector <int> v1(otherVec);
	//vector <int> v2 = otherVec;
	//vector <int> v3{ 1,2,3 };
	//vector <int> v4 = { 1,2,3,4 };
	//vector <int> v5(3);
	//vector <int> v6(3, 1);
	//vector <int> v7(otherVec.begin(), otherVec.end());

	//9.13
	/*list<int> l1;
	vector<int> v2;
	vector<double> v3(v2.begin(), v2.end());
	vector<double> v4(l1.begin(),l1.end());*/

	//swap
	/*vector <int> v1{ 1,2,3 }, v2{ 4,5 };
	swap(v1, v2);
	for (auto i : v1)	cout << i << endl;
	for (auto i : v2)	cout << i << endl;*/

	//9.14
	/*list<char*> l{"hello","world"};
	vector<string> v;
	v.assign(l.cbegin(), l.cend());*/

	//9.16
	/*list<int> l1{ 1,2,3 };
	vector<int> v1{ 1,2,1,4 }, v2;
	v2.assign(l1.cbegin(), l1.cend());
	cout << (v1 < v2 ? "v1 smaller" : "v2 smaller") << endl;*/

	//9.18
	//	string str;
	//	deque<string> sq;
	//	list<string> sl;
	//	while (cin >> str)
	//	{
	//		sq.push_back(str);
	//		sl.insert(sl.end(), str);
	//	}
	//	for (auto it = sq.cbegin(); it != sq.cend(); ++it)
	//	{
	//		cout << *it << endl;
	//	}
	//	for (auto it = sl.cbegin(); it != sl.cend(); ++it)
	//	{
	//		cout << *it << endl;
	//	}

	//9.20
	//list<int> il{ 1,2,3,4,5 };
	//deque<int> idq1, idq2;
	//for (auto i : il)
	//{
	//	if (i & 0x01)	//(i & 0x1 ? odd : even).push_back(i)
	//		idq1.push_back(i);
	//	else
	//		idq2.push_back(i);
	//}

	//visit container
	//vector<int> ivec(1, 1);
	//cout << ivec.at(0) << endl;
	//cout << ivec[0] << endl;
	//cout << ivec.front() << endl;
	//cout << *ivec.begin() << endl;

	//erase
	//9.26
	/*int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	int arr_size = sizeof(ia) / sizeof(int);
	vector<int> ivec(&ia[0],&ia[arr_size]);
	list<int> il(begin(ia), end(ia));
	for (auto it = ivec.begin(); it != ivec.end(); )
	{
	if (!(*it & 0x01))
	it = ivec.erase(it);
	else
	++it;
	}
	for (auto it = il.begin(); it != il.end(); )
	{
	if (*it & 0x01)
	it = il.erase(it);
	else
	++it;
	}*/

	//forward_list
	//9.27
	/*forward_list<int> ifl{1,2,3,4,5,6,7};
	auto prev = ifl.cbefore_begin();
	auto curr = ifl.cbegin();
	while (curr != ifl.cend())
	{
	if (*curr & 0x01)
	curr = ifl.erase_after(prev);
	else
	{
	prev = curr;
	++curr;
	}
	}
	for (auto i : ifl)
	{
	cout << i << endl;
	}*/

	//9.28
	/*forward_list<string> flst{ "hello","moto","jimmy","jack","is","handsome" };
	string str1{ "moto" }, str2{ "luola" };
	InsertStr(flst, str1, str2);*/

	//capacity
	/*vector<int> ivec;
	cout << "ivec: size: " << ivec.size()
	<< " capacity: " << ivec.capacity() << endl;
	for (int i = 0; i < 24; ++i)
	ivec.push_back(i);
	cout << "ivec: size: " << ivec.size()
	<< " capacity: " << ivec.capacity() << endl;*/

	//others ops for string
	//	const char *cp = "Hello World!!!";
	//	char noNull[] = { 'H','i' };
	//	string s1(cp);
	//	string s2(noNull, 2);
	//	string s3(noNull);	//undefined
	//	string s4(cp + 6, 5);
	//	string s5(s1, 6, 5);
	//	string s6(s1, 6);
	//	string s7(s1, 6, 20);
	//	//string s8(s1, 16);	//out_of_range
	//
	//	//substr
	//	string s8 = s1.substr(0, 5);
	//	string s9 = s1.substr(6);
	//	string s10 = s1.substr(6, 11);

	//9.41
	/*vector<char> cvec{ 'h','i' };
	string str(cvec.begin(),cvec.end());*/

	//append,replace
	/*string s("C++ Primer");
	s.append(" 5th Ed.");
	s.replace(1, 2, "--");
	*/
	//find string
	//string name("AnnaBelle");
	//auto pose1 = name.find("nna");
	//string numbers("1234567890"), names("r0k1");
	//auto pos = names.find_first_of(numbers);
	//string dept("1414e412412");
	//auto pos2 = dept.find_first_not_of(numbers);

	//string to num
	/*int i = 42;
	string s = to_string(i);
	double d = stod(s);
	string s2 = "pi = 3.14";
	d = stod(s2.substr(s2.find_first_of("+-.0123456789")));
	*/
	//9.50
	//vector<string> svec{ "1","2","3","4" };
	//int sum = 0;
	//double dsum = 0;
	//for (auto s : svec)
	//{
	//	sum += stoi(s);
	//	dsum += stod(s);
	//}

}

//10.12
bool compareIsbn(Sales_data &sd1, Sales_data &sd2)
{
	return sd1.isbn().size() < sd2.isbn().size();
}

//10.13
bool myPartition_5(const string &s)
{
	return s.size() >= 5;
}



void Chapter10()
{
	//find
	/*vector<int> ivec{1,2,3,4,42,45,42,42};
	int val = 42;
	auto result = find(ivec.cbegin(), ivec.cend(), val);
	cout << "the value " << val << (result == ivec.cend() ? " is not present" : " is present") << endl;*/
	//10.1
	//vector <int> ivec{ 1,2,1,2,4,5,6,1,2,1 };
	//int val = 1;
	//int countn = 0;
	//for (auto it : ivec)
	//{
	//	if (it == val)
	//		++countn;
	//}
	//cout << count(ivec.cbegin(),ivec.cend(),val) << endl;

	////10.2
	//list <string> slist{ "a","b","a","c" };
	//cout << count(slist.cbegin(), slist.cend(), "a") << endl;

	//readOnly alg
	//10.3
	//vector<int> ivec{ 1,2,3 };
	//int sum = accumulate(ivec.cbegin(), ivec.cend(), 0);
	//cout << sum << endl;
	//fill_n(back_inserter(ivec), 10, 0);
	//
	////write alg
	////10.6
	//fill_n(ivec.begin(), ivec.size(), 0);

	//resort
	//10.9
	/*void elimDups(vector<string> &str);
	vector<string> str{ "cat","dog","apple","ban","cat","ban" };
	elimDups(str);
	for (auto s : str)
	cout << s << endl;*/

	//Custumize alg
	//pass parameters to alg
	//10.11
	/*void elimDups(vector<string> &str);
	vector<string> str{ "cat","dog","apple","ban","cat","ban" };
	elimDups(str);
	bool isShorter(const string &s1, const string &s2);
	stable_sort(str.begin(), str.end(), isShorter);
	for (auto s : str)
	cout << s << endl;*/

	//10.13
	/*vector<string> str2{ "cat","dog","apple","ban","cat","ban","morethan5" };
	auto str2_p =  partition(str2.begin(), str2.end(), myPartition_5);
	for (auto it = str2.cbegin(); it != str2_p; ++it)
	{
	cout << *it << endl;
	}*/

	//lambda expression
	//auto f = [] {return 42; };
	//cout << f() << endl;
	//void elimDups(vector<string> &str);
	//vector<string> str{ "cat","dog","apple","ban","cat","ban" ,"watermelon"};
	//elimDups(str);
	//
	//stable_sort(str.begin(), str.end(), [](const string &a, const string &b)
	//{return a.size() < b.size(); });
	//for (auto s : str)
	//	cout << s << endl;
	////find_if
	//auto sz = 4;
	//auto wc = find_if(str.begin(), str.end(), [sz](const string &a)
	//{return a.size() >= sz; });
	//if (wc != str.end())	cout << "*wc = " << *wc << endl;
	////for_each
	//cout << "for_each -------";
	//for_each(wc, str.end(), [](const string &s) {cout << s << " "; });
	//cout << endl;

	//10.14
	//auto lambda14 = [](int a, int b) {return a + b; };
	//cout << lambda14(1, 2) << endl;

	////10.15
	//int a = 10;
	//auto lambda15 = [a](int b) {return a + b; };
	//cout << lambda15(2) << endl;

	//lambda catch and return 
	//size_t v1 = 42;
	//auto f2 = [&v1] {return ++v1; };
	////10.20
	//vector<string> str{ "apple","banana","chiken","dorrorororo" };
	//size_t sz = 6;
	//auto count = count_if(str.begin(), str.end(), [sz](const string &s) {return s.size() > sz; });
	//cout << count << endl;
	//10.21
	//	int v1 = 10;
	//	auto lambda21 = [&v1]() ->bool 
	//	{	while (v1)
	//		{
	//			--v1;
	//		}
	//	return v1 ? false : true;
	//	};
	//	cout << v1 << endl <<  (lambda21()? "true" : "false") << endl;

	//bind args for function (not using lambda)
	//using namespace placeholders;
	//auto check6 = bind(check_size,_1,6);
	//auto g = bind(f,a,b,_2,c,_1) == g(x,y) -> f(a,b,y,c,x)

	//re explore iterator(insert,stream,reverse,move)
	//insert iterator
	//list<int> lst = { 1,2,2,3,4,4 };
	//list<int> lst2, lst3;
	//copy(lst.cbegin(), lst.cend(), front_inserter(lst2));
	//copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));
	////10.27
	//list<int> lst4;
	//unique_copy(lst.cbegin(), lst.cend(), inserter(lst4, lst4.begin()));

	//iostream iterator .................
	//reverse iterator
	//string str = "apple,banana,cat,dog";
	//auto rcomma = find(str.crbegin(), str.crend(), ',');
	//cout << string(rcomma.base(), str.cend()) << endl;
	////10.36
	//list<int> lst{ 0,2,4,10,0,4 };
	//auto index = find(lst.crbegin(), lst.crend(), 0);
	//cout << distance(index, lst.crend()) << endl;
	//10.37
	//vector<int> ivec{ 1,2,3,4,5,6,7,8,9,10 };
	//list<int> lst;
	//copy(ivec.crbegin() + 3, ivec.crend() - 2, back_inserter(lst));

	//Structure of generic algorithm............

}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void elimDups(vector<string> &str)
{
	sort(str.begin(), str.end());
	auto u_end = unique(str.begin(), str.end());
	str.erase(u_end, str.end());
}

void Chapter11()
{
	//using map & set
	/*map<string, size_t> word_count;
	set<string> exclude;
	string word;
	while (cin >> word)
	{
	if(exclude.find(word) == exclude.end())
	++word_count[word];
	}
	for (const auto &w : word_count)
	{
	cout << w.first << " occurs " << w.second
	<< ((w.second > 1) ? " times" : " time") << endl;
	}*/

	//overview
	/*string str;
	int i;
	pair<string, int> si;
	vector<decltype(si)> pvec;*/

	//map & set OPs
	vector<int> ivec = { 2,4,6,2,4 };
	set<int> set2;
	set2.insert(ivec.cbegin(), ivec.cend());
	set2.insert({ 1,3,5,1,3,5 });


}

shared_ptr<int> factory(int a)
{
	return make_shared<int>(a);
}

shared_ptr<int> use_factory(int a)
{
	shared_ptr<int> p = factory(a);
	return p;	//p 指向的内存不会被释放
}

class StrBlob
{
public:
	typedef vector<string>::size_type size_type;
	//StrBlob() = default;
	StrBlob() : data(make_shared<vector<string>>()) {}
	StrBlob(initializer_list<string> il)
		: data(make_shared<vector<string>>(il)) {}
	//so we can type: StrBlob({"a","b","c",..}) to init

	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const string &t) { data->push_back(t); }
	void pop_back();

	string& front();
	const string& front() const; //12.2	常对象调用
	string& back();
	const string& back() const;	//12.2
private:
	shared_ptr< vector<string> > data;
	void check(size_type i, const string &msg) const;
};

//12.6
vector<int> * alloc_vec()
{
	return new vector<int>;
}

void cin_vec(vector<int> *p)
{
	int num;
	while (cin >> num)
	{
		p->push_back(num);
	}
}

void print_vec(vector<int> *&p)
{
	for (auto it = p->cbegin(); it != p->cend(); ++it)
	{
		cout << *it << endl;
	}
	if (p != nullptr)
	{
		delete p;
		p = nullptr;
	}
}

//12.7
shared_ptr<vector<int>> sharePtr_alloc_vec()
{
	return make_shared<vector<int>>();
}

void sharePtr_cin_vec(shared_ptr<vector<int>> &sp)
{
	int num;
	while (cin >> num)
	{
		sp->push_back(num);
	}
}

void sharePtr_print_vec(shared_ptr<vector<int>> &sp)
{
	for (auto it = sp->cbegin(); it != sp->cend(); ++it)
	{
		cout << *it << endl;
	}
	sp = nullptr;
}

void sharePtr_process(shared_ptr<int> ptr)
{

}

//12.14
struct connection
{
	string ip;
	int port;
	connection(string i, int p) :ip(i), port(p) {}
};

struct destination
{
	string ip;
	int port;
	destination(string i, int p) :ip(i), port(p) {}

};

connection connect(destination *dest)
{
	shared_ptr<connection> pconn(new connection(dest->ip, dest->port));
	cout << "creating connection (" << pconn.use_count() << ")" << endl;
	return *pconn;
}

void disconnect(connection conn)
{
	cout << "connection close " << conn.ip << " " << conn.port << endl;
}

void end_connection(connection *p)
{
	disconnect(*p);
}

void connect_f(destination &d)
{
	connection c = connect(&d);
	shared_ptr<connection> p(&c, end_connection);
	//12.15
	//shared_ptr<connection> p(&c, [](connection *p) {disconnect(*p); });
	cout << "connecting now(" << p.use_count() << ")" << endl;

}
//dynamic memory / heap
void Chapter12()
{
	//12.1.1	//dynamic memory & shared_ptr
	//shared_ptr
	//shared_ptr<string> p1;
	//shared_ptr<list<int>> p2;
	//shared_ptr <int> spi;
	//shared_ptr<int> p3 = make_shared<int>(42);
	//auto p6 = make_shared<string>();
	//use_factory(256);		//memory leak!!!

	//test shared_ptr inferences
	//	shared_ptr<int> p1 = make_shared<int>(10);
	//	cout << p1.use_count() << endl;
	//	shared_ptr<int> p2(p1);
	//	cout << p1.use_count() << endl;

	////test class StrBlob
	//try
	//{
	//	StrBlob Blob1({ "a","b","c" });
	//	cout << Blob1.front() << endl;
	//}
	//catch (out_of_range err)
	//{
	//	cout << err.what() << endl;
	//}

	//12.1 b1 = b2 = 4
	//12.3 不需要？
	//12.4 size 默认大于等于0 （size_type是无符号整型）
	//12.5	??

	//12.1.2	//manage memory ,new,delete
	//int *i1 = new int(1024);
	//auto p1 = new auto(obj);
	//const int *ci1 = new const int(1024); 
	//int *p2 = new (nothrow) int;
	//int *pi2 = nullptr;
	//delete pi2;

	//12.6
	/*vector<int> *pvec = alloc_vec();
	cin_vec(pvec);
	print_vec(pvec);*/
	//12.7
	/*auto sp = sharePtr_alloc_vec();
	sharePtr_cin_vec(sp);
	sharePtr_print_vec(sp);*/

	//12.1.3
	//shared_ptr<int> p1 = new int(1024);	//wrong
	//shared_ptr<int> p2(new int (1024));
	//不要用内置指针访问智能指针管理的对象
	//也不要用get初始化另一个智能指针或为智能指针赋值
	//p2.reset(new int(2048));	//重定向p2

	//12.10
	//正确
	//12.11
	//p没答应共享给临时智能指针。
	//这样临时智能指针引用对象计数为0，释放空间,p空悬
	//12.12
	//a,legal，将sp拷贝给process的形参,函数里引用计数为2，结束为1
	//b,illegal,内置不能隐式转智能
	//c,illegal,同上
	//d,legal,但是函数结束后对p指向空间已释放
	//test for d
	/*auto p = new int(42);
	sharePtr_process(shared_ptr<int> (p));*/
	//12.13
	//会导致sp空悬,
	//CrtLsvalidHeapPointer breakdown 
	/*auto sp = make_shared<int>(10);
	auto p = sp.get();
	delete p;*/

	//12.1.4	//shared_ptr and exception
	//使用智能指针，出现异常后能释放内存
	//share_ptr<connection> p(&c,end_connection);
	//***	注意：智能指针陷阱	***
	//12.14
	//destination dest("220.181.111.111", 10086);
	//connect_f(dest);

	//12.1.5	//unique_ptr(需要delete！！！！！！！)
	/*unique_ptr<string> p1(new string("unique_string"));
	unique_ptr<string> p2(p1.release());
	unique_ptr<string> p3(new string("Trex"));
	p2.reset(p3.release());*/
	//注意：release() 并没有释放内存空间，只是切断指针
	//返回unique_ptr
	//unique_ptr<int> clone1(int p)
	//{
	//	return 	unique_ptr<int>(new int(p));
	//}
	//12.16
	//unique_ptr<int> up1(new int(10));
	//unique_ptr<int> up2(up1);	//尝试引用已删除的函数.
	//12.17
	//a,illegal
	//b,illegal？----legal,有风险
	//c,legal   //同上
	//d,illegal	
	//e,legal
	//f,illegal
	//12.18
	//??

	//12.1.6	//weak_ptr 弱共享对象,用shared_ptr初始化
	/*auto p = make_shared<int>(42);
	weak_ptr<int> wp(p);*/
	//调用lock 访问对象
	//略

	//12.2 动态数组	new & allocator
	//12.2.1 new 和数组
	//动态数组不是“数组”类型,没有begin和end,不能用范围for
	//int *pia = new int[10]();
	//string *psa = new string[10]();
	//int *pia3 = new int[10]{ 0,1,2,3,4,5,6,7,8,9 };
	////new 可分配空数组
	////delete 
	//delete[] pia3;
	//delete[] psa;
	//delete[] pia;
	//	unique_ptr and dynamic array
	//unique_ptr<int[]> up(new int[10]());
	//for (size_t i = 0; i != 10; ++i)
	//{
	//	up[i] = i;
	//}
	//up.release();
	////shared_ptr 需要提供删除器
	//shared_ptr<int> sp(new int[10], [](int *p) {delete[] p; });
	//sp.reset();
	////shared_ptr 必须用get获取内置指针来访问数组元素
	//for (size_t i = 0; i != 10; ++i)
	//{
	//	*(sp.get() + i) = i;
	//}

	//12.23
	/*char *str1 = "str1";
	char *str2 = "str2";
	char *str3 = new char[100];
	memcpy(str3, str1, 100);
	strcat(str3, str2);
	delete[] str3;

	string st1 = "str1";
	string st2 = "str2";
	unsigned int len = strlen(st1.c_str()) + strlen(st2.c_str()) + 1;
	char *st3 = new char[len];
	strcpy_s(st3, len,(st1 + st2).c_str());
	delete[] st3;*/

	//12.24 ???
	//12.25
	//delete[] pa;

	//12.2.2 allocator 类 （内存分配和对象构造 分离）
	int n = 10;
	allocator<string> alloc_str;	//allocator 对象
	auto const p = alloc_str.allocate(n);	//分配内存(未构造)
	//后略 
	//---------------
	//12.3	文本查询程序设计
	//需求
	// input : word
	//	output : occur times & line(s)
	//如输入： element
	//输出： element occurs 2 times
	//	(line 36) A set element contains only a key
	// (line 158) operator creates a new element 

	//工具
	//1.vector<string>保存每行文本,如vec[0]保存第一行文本
	//2.使用istrigstream将每行分解为单词
	//3.使用set<line_Num> 保存行号
	//4.使用map<string,set<line_Num> > 关联单词和行号

	//数据结构
	//TextQuery 保存输入文件，包含一个vector 和map
	//操作：读取给定文件、执行查询
	//QueryResult 保存查询结果，包含一个print()完成打印工作
	//两个类共享数据（set，对应文本）,可使用shared_ptr








}




int main(int argc, char *argv[])
{
	//Chapter6();
	//6.25
	//string str1 = argv[1];
	//string str2 = argv[2];
	//string str3 = str1 + str2;
	//cout << str3 << endl;

	//Chapter7();
	//Chapter8();
	//Chapter9();
	//Chapter10();
	//Chapter11();
	Chapter12();
	return 0;
}



Sales_data & Sales_data::combine(const Sales_data & rhs)
{
	// TODO: 在此处插入 return 语句
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	double avg = 0.0;
	if (units_sold)
		avg = revenue / units_sold;
	else
		avg = 0;
	return avg;
}

inline void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

Date::Date(const string & md, const string & y)
{

}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

string & StrBlob::front()
{
	// TODO: 在此处插入 return 语句
	check(0, "front on empty StrBlob");
	return data->front();
}

const string & StrBlob::front() const
{
	// TODO: 在此处插入 return 语句
	check(0, "front on empty StrBlob");
	return data->front();
}

string & StrBlob::back()
{
	// TODO: 在此处插入 return 语句
	check(0, "back on empty StrBlob");
	return data->back();
}

const string & StrBlob::back() const
{
	// TODO: 在此处插入 return 语句
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}