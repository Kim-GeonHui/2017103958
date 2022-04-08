#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 구구단 수행
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << '\n';
		}
	}

	return 0;
}