#include <iostream>
#include <algorithm>
#include <vector>

auto main() -> int {
	std::vector<int> vec(3);
	int a[3];
	std::ranges::for_each(vec, [](auto& now) {std::cout << now << " "; });
	std::ranges::for_each(a, [](auto& now) {std::cout << now << " "; });
}