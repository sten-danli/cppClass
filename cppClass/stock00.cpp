#include<iostream>
#include"stock00.h"


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
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares sold cant be negatie. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You cant sell more than you have!"
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	cout << "Company: " << company
		<< " Shares: " << shares << '\n'
		<< " Shares Price: $" << share_val
		<< " Total Worth: $" << total_val << '\n';

}
