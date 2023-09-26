#include <iostream>
#include <math.h>
using namespace std;
long double factorial2(int x) {
	if (x == 0) 
		return 1;
	if (x == 1)
		return 1;
	return x * factorial2(x - 2);
}
long double t(long double x) {
	long double numerator = 0;
	long double denominator = 0;
	for (int k = 0; k <= 10; k++) {
		numerator = numerator + pow(x, 2 * k + 1) / factorial2(2 * k + 1);
	}
	for (int k = 0; k <= 10; k++) {
		denominator = denominator + pow(x, 2 * k) / factorial2(2 * k);
	}
	return numerator / denominator;
}
int main() {
	long double ans;
	long double y;
	cin >> y;
	ans = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
	cout << ans;
	return 0;
}

