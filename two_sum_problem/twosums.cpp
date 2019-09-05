#include <iostream>	
#include <vector>			

/*
 *	TwoSum: 
 *		Given an array A of integers and a target number P, return the indices of two
 *		numbers in A that add up to P
 */
 
 class Solution {
 	public:
 		// Implemented using brute force approach
 		std::vector<int> twoSum(std::vector<int>& A, int P) {
 			std::vector<int> result;
 			
 			for (int i = 0; i < A.size(); i++) {
 				for (int j = 0; j < A.size(); j++) {
 					if (A[i] + A[j] == P) {
 						result.push_back(i);
 						result.push_back(j);
 						return result;
 					}
 				}
 			}
 			
 			return result;
 		}
 };

int main() {
	/* ------- IO EXAMPLE --------- */
	std::vector<int> A;				// Array of numbers read from cin
	int P;						// Target number
	std::vector<int> result;			// Store the result
	Solution m;				
	
	// Read in target number P
	std::cout << "Please enter target number: \n";
	std::cin >> P;					
	
	// Read in array of integers A
	int tempStorage;			// Temporary storage variable for the integer read from
								// the command line
								
	std::cout << "Please enter values in the array (enter \"9999\" when finished): \n";
	while (std::cin >> tempStorage && tempStorage != 9999) {
		A.push_back(tempStorage);
	}
	
	// Display the contents of P and A for the user
	std::cout << "Your array is: ";
	for (std::vector<int>::const_iterator i = A.begin(); i != A.end(); ++i) {
		std::cout << *i << " ";
	}
	
	std::cout << "\n";
	std::cout << "Your target number is: " << P << "\n";
	
	result = m.twoSum(A, P);
	
	if (result.size() == 0) {
		std::cout << "No matches found\n";
	} else {
		std::cout << "Indices in A that add up to the target: ";
		for (std::vector<int>::const_iterator i = result.begin(); i != result.end(); ++i) {
			std::cout << *i << " ";
		}
		std::cout << "\n";
	}
	
	return 0;
	
}