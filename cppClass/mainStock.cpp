#include<iostream>
#include"stock00.h"

int main() {
	Stock st1;
	st1.acquire("NanoSmart", 28, 39.18);
	st1.show();
	st1.buy(15, 18.125);
	st1.show();
}