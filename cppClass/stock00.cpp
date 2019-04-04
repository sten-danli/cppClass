#include<iostream>
//#include<cstring>
using namespace std;

class Stock
{
private:
	string company;
	long shares;
	long share_val;
	double total_val;
	void set_tot()
	{
		total_val = shares * share_val;
	}
public:
	void acquire(string co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

void Stock::acquire(string co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		cout << "Number of shares cant be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares purchased cant be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
	}
}
