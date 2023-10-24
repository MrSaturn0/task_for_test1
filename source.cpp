#include <iostream>
int main(int n) 
{
	std::cout << "You number is here:";
	std::cin >> n;
	int count = 0;
	int max_number = n;
	for (; n != 1; ++count) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else { 
			n = (n * 3) + 1; 
		}
		if (max_number < n) {
			max_number = n;
		}
	}
	std::cout << "Coun: " << count << std::endl;
	std::cout << "Max_number: " << max_number << std::endl;

	std::system("pause");
	return 0;
}