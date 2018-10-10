// This program calculates the monthly service fee for a checking account

#include <iostream>
using namespace std;

//start of function main
int main() {

	float start_balance = 0;
	float amount_deposited = 0;
	int number_of_checks = 0;
    float end_balance, total_value_of_checks, fee;

	cout << "Starting balance is ";
	cin >> start_balance;

	//exit the program id the starting balance is less than 0
	if (start_balance < 0) {
		cout << "The account has been closed\n";
		return 1; 
	}

	cout << "Amount deposited is ";
	cin >> amount_deposited;

	cout << "Number of checks is ";
	cin >> number_of_checks;

	cout << "Total value of checks is ";
	cin >> total_value_of_checks;

    // calculate end of the month balance
    end_balance = start_balance + amount_deposited - total_value_of_checks;
	
	//per-check fee
	if (number_of_checks <= 19) {
		fee = number_of_checks * 0.10;
	}
	else if (number_of_checks > 19 and number_of_checks <= 39) {
		fee = number_of_checks * 0.08;
	}
	else if (number_of_checks > 39 and number_of_checks <= 59) {
		fee = number_of_checks * 0.06;
	}
	else {
		fee = number_of_checks * 0.04;
	}


	// monthly service fee 
	if (start_balance < 400.0) {
		fee = fee + 15.0;
	}
	if (end_balance < 400.0) {
		fee = fee + 15.0;
	}
	if (total_value_of_checks/number_of_checks > 500.0) {
		fee = fee + 25.0;
	}
    if (end_balance < 0.0){
        fee = fee + 50.0;
    }

	cout << "End balance is $" << end_balance << endl;
	cout << "Monthly service fee is $" << fee << endl;

	return 0;

} //end of main

