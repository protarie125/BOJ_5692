#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	constexpr auto b1 = ll{ 1 };
	constexpr auto b2 = ll{ 2 * b1 };
	constexpr auto b3 = ll{ 3 * b2 };
	constexpr auto b4 = ll{ 4 * b3 };
	constexpr auto b5 = ll{ 5 * b4 };
	auto v = vector<ll>{ b1, b2, b3, b4, b5 };

	string x;
	cin >> x;
	while ("0" != x) {
		const auto n = static_cast<int>(x.length());
		auto ans = ll{ 0 };
		for (auto i = 0; i < n && i < 5; ++i) {
			ans += (x[n - 1 - i] - '0') * v[i];
		}

		cout << ans << '\n';
		cin >> x;
	}

	return 0;
}