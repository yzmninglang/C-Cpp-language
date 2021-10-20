#pragma once
#include <iostream>
using namespace std;

class history{
public:
	history(string t,string u,string h):time(t),uid(u),his(h){};
	string time,uid,his;
};