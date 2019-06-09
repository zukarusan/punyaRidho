#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	string word;
	std::cin >> m >> n;
	std::vector< std::vector<char> > wordGrid(m, std::vector<char>(n));
	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			std::cin >> wordGrid[r][c];
		}
	}
	std::cin >> word;
	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			if (wordGrid[r][c] == word[0]) {
				
				;
			}
		}
	}	
}