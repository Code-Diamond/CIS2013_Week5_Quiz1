#include <iostream>

using namespace std;

//Extra code: global variables
int counter = 0;
int primes[25];

//Extra code for creating an array
void setPrimeArray()
{
	
	for (int i=2; i<100; i++) 
	{
		for (int j=2; j<i; j++)
		{
			if (i % j == 0) 
			{
				break;
			}
			else if (i == j+1)
			{
				//cout << i << " ";
				counter++; 
				primes[counter] = i;
			}
		}
    	}

}

//Extra code for displaying the created array
void displayPrimeArray()
{
	for(int i = 0; i < 24; i ++)
	{
		cout << primes[i] << ", ";
	}
}

//Utilized code that prints all the prime numbers between the first and second input
void printAllPrimeNumbers(int firstNumber, int secondNumber)
{
	if(firstNumber < 2)
	{
		firstNumber = 2;
	}

	for (int i=firstNumber; i<secondNumber; i++) 
	{
		if(i == 2)
		{
			cout << i << " ";
		}
		for (int j=firstNumber; j<i; j++)
        	{
			if (i % j == 0) 
			{
				break;
			}
			else if (i == j + 1)
			{
				cout << i << " ";
				//counter++; 
				//primes[counter] = i;
			}
		}
    	}

}

//LCM algorithm
void lcm(int firstNumber, int secondNumber)
{

    int x, y;

    x = firstNumber;
    y = secondNumber;

    while(x != y)
    {
		if(x < y)
		{
			x += firstNumber;
		}
		else
		{
		    y += secondNumber;
		}
	}

    cout << "\nL.C.M. of " << firstNumber << " and " << secondNumber << " is " << x;
}

//Main Function
int main()
{
	int firstNumber, secondNumber;
	cout << "Enter first number: "; cin >> firstNumber;
	cout << "Enter second number: "; cin >> secondNumber;
	
	cout << "You entered: " << firstNumber << ", " << secondNumber << endl;
	cout << "The prime numbers between those two numbers (including themselves if they are prime): " << endl;
	printAllPrimeNumbers(firstNumber, secondNumber);
	lcm(firstNumber, secondNumber);
	return 0;
}
