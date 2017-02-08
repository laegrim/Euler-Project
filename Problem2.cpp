//Problem: Find the sum of even valued terms in the Fibonacci sequence that do not exceed X

#include <iostream>
#include <cstdlib>

using namespace std;

main (int argc, char* argv[]) {

	long sum = 0;
	long fib = 0;
	long fibPrev = 1;
	long fibSecondPrev = 0;
	char * upperLimit;

	//Check Number of Arguments
	if (argc != 2){
		cout << "Number of Arguments Invalid, only " << argc << " arguments passed.\n"; 
		for (int i = 0; i < argc; i++)
			cout << "Arg " << i << ": " << argv[i] << endl;
		return 0;
	}
	//Make Sure Arguments Are Valid
	else{
		upperLimit = argv[1];
	}
	
	long upper = atoi(upperLimit);

	if (upper < 3){
		cout << "Argument Sizes Invalid\n";
		return 0;
	}

	//Calculate and Print Output

	for (int i = 2; fib <= upper; i++){
		fib = fibPrev + fibSecondPrev;
		if (fib % 2 == 0 && fib <= upper)
			sum += fib;
		cout << "Term " << i << ": " << fib << endl;
		cout << "Current Sum: " << sum << endl;
		fibSecondPrev = fibPrev;
		fibPrev = fib;
	}
	cout << "Final Sum of Even Valued Fibonacci Terms below " << upper << ": " << sum << endl;
	return 0;
}
