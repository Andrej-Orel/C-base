#include <stdio.h>
#include <iostream>
#include <cmath>

int main() {
	float a, b, c, D, x1, x2, x;
	const int TWO=2,
		  FOUR=4;

	std::cout << "Enter a="; std::cin >> a;
	std::cout << "Enter b="; std::cin >> b;
	std::cout << "Enter c="; std::cin >> c;

	D = pow(b, TWO) - (FOUR * a*c);

	if (D >= 0) {
          if (a == 0) {
            x = (-c) / b;
              std::cout << "x=" << x << std::endl;
	  }
	    else {
              x1 = (-b + sqrt(D)) / (TWO * a);
	      x2 = (-b - sqrt(D)) / (TWO * a);
	      std::cout << "x1=" << x1 << std::endl;
	      std::cout << "x2=" << x2 << std::endl;
	    }
	}
	else {	printf("\n No root equation");	}

	system("pause");
	return 0;
}
