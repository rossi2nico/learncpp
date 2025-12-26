#include <iostream>

double getUserValue() 
{
	double value { };	

	std::cout << "Enter a double value: ";
	std::cin >> value;

	return value;
}

char getOperator()
{
	char operation {' '};
	bool valid { false };

	while (!valid) {
		std::cout << "Enter a valid operator (+, -, *, /): ";
		std::cin >> operation;

		if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
			valid = true;	
		}
	}

	return operation;

}

double performOperation(double x, double y, char operation) 
{
	double result { };

	switch(operation) {
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
	}

	return result;
}

int main()
{
	double x { getUserValue() };
	double y { getUserValue() };
	char operation { getOperator() };
	
	std::cout << performOperation(x, y, operation);

	return 0;
}
