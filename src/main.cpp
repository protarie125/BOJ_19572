#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double d1, d2, d3;
	cin >> d1 >> d2 >> d3;

	// a + b = d1
	// a + c = d2
	// b + c = d3
	// -> b - c = d1 - d2
	// -> 2b = d1 - d2 + d3
	const auto& b = (d1 - d2 + d3) / 2;
	const auto& a = d1 - b;
	const auto& c = d3 - b;
	if (b <= 0 || a <= 0 || c <= 0) {
		cout << -1;
		return 0;
	}

	cout << 1 << '\n';
	cout << fixed << setprecision(1) <<
		round(a * 10) / 10 << ' ' <<
		round(b * 10) / 10 << ' ' <<
		round(c * 10) / 10;

	return 0;
}