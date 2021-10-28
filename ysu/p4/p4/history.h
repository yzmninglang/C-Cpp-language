#pragma once
#include <iostream>
using namespace std;

class history{
public:
	history(string t,string u,string h,double m):time(t),uid(u),his(h),money(m){};
	string time,uid,his;
	double money;
};