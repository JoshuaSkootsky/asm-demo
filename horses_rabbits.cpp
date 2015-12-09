// Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys
//  100 animals for $100, How many of each animal did he buy? 
#include <iostream>
#include <time.h>

int main()
{
    clock_t t1, t2;
	int animals = 1000;
	int dollars = 1000;
	int max = 1000;
    // start timing
    t1 = clock();
	for (int h=0; h < max; h++) {
		for (int p=0; p <max; p++) {
			for(int r=0; r<max; r++) {
				if (h+r+p == animals) {
					if((10*h) +(3*p) +(0.5*r) == dollars) {
						std::cout << "Pigs = " << p << ", horses = " 
						<< h << ", rabbits = " << r << '\n';
					}
				}
			}
		}
	}
    t2 = clock();
    float diff ((float)t2 - (float)t1);
    float seconds = diff/CLOCKS_PER_SEC;
    std::cout << seconds << " seconds" << '\n';   
    return 0;
}
