// https://bit.ly/3ewm1TF   .Code studio link.
// GFG Macros Article: https://www.geeksforgeeks.org/macros-...

// What we covered.

// 1.MACROS
// 2.DEFAULT ARGUMENTS
// 3.INLINE FUNCTION
// 4.GLOBAL VARIABLES
// 5.CONSTANT VARIABLES


// Both are example of function like macro..
// This works as like an function call.

// C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Function-like Macro definition
// #define min(a, b) ((a < b) ? a : b)  // replaces the  code with ((a < b) ? a : b) wherever the min(a, b) is written.

//  Driver Code
// int main()
// {

// Given two number a and b
// 	int a = 18;
// 	int b = 76;

// 	cout << "Minimum value between "
// 		<< a << " and " << b 
// 		<< " is: " << min(a, b);

// 	return 0;
// }


// C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Macro definition
// #define AREA(l, b) (l * b)

// Driver Code
// int main()
// {
// Given lengths l1 and l2
// 	int l1 = 10, l2 = 5, area;

// Find the area using macros
// 	area = AREA(l1, l2);

//  Print the area
// 	cout << "Area of rectangle"
// 		<< " is: "<<
// 		area;

// 	return 0;
// }
