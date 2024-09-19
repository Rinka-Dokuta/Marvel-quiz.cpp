#include<iostream>
using namespace std;

int Ironman = 0;
int Hulk = 0;
int Widow = 0;
int Captain = 0;


int main() {
	char input;

	//Question 1--------------------------------------------------------------
	cout << "What is your favoirte color? Red (R), Green (G), Black (B), or White (W)" << endl;
	cin >> input;

	if (input == 'R') {
		Ironman += 1;
	}
	else if (input == 'G') {
		Hulk += 1;
	}
	else if (input == 'B') {
		Widow += 1;
	}
	else if (input == 'W') {
		Captain += 1;
	}
	else {
		cout << "That is not an option." << endl;
	}

	//Question 2------------------------------------------------------
	cout << "What is your power desire? Strength (S), Flight (F), Physical boost (P), or Defense boost (D)" << endl;
	cin >> input;

	if (input == 'F') {
		Ironman += 1;
	}
	else if (input == 'S') {
		Hulk += 1;
	}
	else if (input == 'P') {
		Widow += 1;
	}
	else if (input == 'D') {
		Captain += 1;
	}
	else {
		cout << "That is not an option." << endl;
	}

	//Question 3------------------------------------------------------------------------------
	cout << "What is your favorite animal? Dog (D), Cat (C), Birds (B), or Hamsters (H)" << endl;
	cin >> input;

	if (input == 'D') {
		Ironman += 1;
	}
	else if (input == 'B') {
		Hulk += 1;
	}
	else if (input == 'C') {
		Widow += 1;
	}
	else if (input == 'H') {
		Captain += 1;
	}
	else {
		cout << "That is not an option." << endl;
	}

	//Question 4--------------------------------------------------------------------------------
	cout << "What is your favoirte food? Donut (D), Salad (S), Burger (B), Ceral (C)" << endl;
	cin >> input;

	if (input == 'D') {
		Ironman += 1;
	}
	else if (input == 'B') {
		Hulk += 1;
	}
	else if (input == 'S') {
		Widow += 1;
	}
	else if (input == 'C') {
		Captain += 1;
	}
	else {
		cout << "That is not an option." << endl;
	}

	//Results--------------------------------------------------------------------------------------
	if (Hulk >= Ironman && Hulk >= Widow && Hulk >= Captain) {
		cout << "Hulk Smash!" << endl;
	}
	else if (Ironman >= Hulk && Ironman >= Widow && Ironman >= Captain) {
		cout << "I am.....Ironman" << endl;
	}
	else if (Widow >= Hulk && Widow >= Ironman && Widow >= Captain) {
		cout << "I'm Always Picking Up After You Boys..." << endl;
	}
	else if (Captain >= Hulk && Captain >= Ironman && Captain >= Widow) {
		cout << "Avengers assemble!" << endl;
	}

	












}
