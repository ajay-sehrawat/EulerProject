#include <iostream>
#include <vector>	// For vectors
#include <cstdint>	// For int64_t

using namespace std;

// prime_factors takes an integer n as input and returns a list of its prime factors
vector<int64_t> primeFactors(int64_t n){
	vector<int64_t> factors;

	// Divides n by 2
	int divisor = 2;

	// Divide the number by the smallest possible prime divisor repeatedly until the number becomes 1
	while(n > 1){
		while(n % divisor == 0){
			// Divisors are appended to the factors vector
			factors.push_back(divisor);
			n /= divisor;
		}

		divisor++;
	}

	return factors;
}

int main(){
	int64_t value = 600851475143;

	vector<int64_t> result = primeFactors(value);

	cout << "The Prime Factors are: ";
	for (vector<int64_t>::iterator i = result.begin(); i != result.end(); ++i){
		int64_t factor = *i;
		cout << factor << " ";
	}

	return 0;
}