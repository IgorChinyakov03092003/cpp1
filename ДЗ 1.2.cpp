#include <iostream>
using namespace std;
#define PI 3.14159265358979323846
void circle(double R) {
	if (R > 0) {
		double S = PI * R * R;
		std::cout << "Area is equal to: " << S << std::endl;
		double L = 2 * PI * R;
		std::cout << "Length is equal to: " << L << std::endl;
	}
	else {
		std::cout << "Error!";
	}
}
int main()
{
	double R;
	std::cout << "Enter the radius:\n";
	std::cin >> R;
	circle(R);
	return 0;
}
