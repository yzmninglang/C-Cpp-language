#include <iostream>
using namespace std;
#include <vector>

#include "card.h"
#include "credit.h"
#include "debit.h"
#include "history.h"
#define FILENAME "data.txt"
#define HISFILE "history.txt"

class atm
{
public:
	atm();
	~atm();
	void save();
	void login();
	void showmenu();
	void create();
	void withdraw();
	void disposit();
	void readfile();
	void tranfs();
	void changepwd();
	void showhistory();
	void find(string uid);
	string gettime();
protected:
	vector<card> alu;
	vector<history> his;
	card *current;
	card *tran;

	
};