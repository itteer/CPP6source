// stock00.h -- Stock class interface
// version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>
using namespace std;

class Stock  // class declaration
{
	private:
		string company;
		long shares;
		double share_val;
		double total_val;
		void set_tot() { total_val = shares * share_val;}
	public:
		void acquire(const string & co, long n, double pr);
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show();
};  // note semicolon at the end

#endif
