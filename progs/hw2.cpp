// Solving the sum and the average of input numbers using counter-controlled iteration.
#include <iostream>
using namespace std;

int main() {
    double sum_positive_numbers = 0; 
    double sum_negative_numbers = 0;
    unsigned int n;
    int i_positive = 0;
    int i_negative = 0;
    int i_zero= 0;

    cout << "How many numbers? ";
    cin >> n;


    for (unsigned int i = 1; i <= n; ++i) {	

        double number;
    	cout << "Enter number: ";
    	cin >> number; 

	    if (number > 0) {
		    sum_positive_numbers += number;
    		i_positive++;			
		}
	    else if (number < 0) {
    		sum_negative_numbers += number;
	    	i_negative++;
		} 
        else {
            i_zero++;
        }
    }

    cout << "Sum of all numbers: " << sum_positive_numbers + sum_negative_numbers << endl;
    cout << "Average of all numbers: " << (sum_positive_numbers + sum_negative_numbers)/(i_positive + i_negative + i_zero) << endl;
    cout << "Sum of positive numbers: " << sum_positive_numbers << endl;
    cout << "Average of positive numbers: " << sum_positive_numbers / i_positive << endl;
    cout << "Sum of negative numbers: " << sum_negative_numbers << endl;
    cout << "Average of negative numbers: " << sum_negative_numbers / i_negative << endl;
    
    return 0;
}

