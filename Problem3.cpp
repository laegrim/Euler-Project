//Problem: Find the largest prime factor of X

#include <iostream>
#include <cstdlib>

using namespace std;

main (int argc, char* argv[]){

	char* target;
	long bigInt;
	long currFactorSmall = 1;
	long currFactorBig = 1;
	long primeFactor = 0;
	bool flag = false;
	bool prime;
	
	//Check Number of Arguments
	if (argc != 2){
		cout << "Number of Arguments Invalid, only " << argc << " arguments passed.\n"; 
		for (int i = 0; i < argc; i++)
			cout << "Arg " << i << ": " << argv[i] << endl;
		return 0;
	}
	//Make Sure Arguments Are Valid
	else{
		target = argv[1];
	}
	
	bigInt = atol(target);

	//Calculate and Print Output
	while (flag == false){
		if (bigInt % currFactorSmall == 0) {
			currFactorBig = bigInt / currFactorSmall;
			prime = true;
			for (long i = 2; (i < currFactorBig) && (prime == true); i ++){
				if (currFactorBig % i == 0){
					prime = false;
				}
			}
			if (prime == true ){
				primeFactor = currFactorBig;
				flag = true;
			}
		}
		currFactorSmall ++;
	}

	cout << "Greatest Prime Factor of " << bigInt << ": " << primeFactor << endl;
	return 0;
}

