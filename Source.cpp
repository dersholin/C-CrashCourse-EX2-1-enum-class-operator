#include <iostream>

enum class Operation { Add, Subtract, Multiply, Divide };

int main()
{
	int arg1, arg2, total;
	std::string operation;
	std::cout << "please input 2 argument for calculator : ";
	std::cin >> arg1 >> arg2;
	std::cout << "What type of operation do you want to perform ( Add, Subtract, Multiply, Divide )? ";
	std::cin >> operation;

	Operation op{};
	if (operation == "Add" || operation == "+") op = Operation::Add;
	else if (operation == "Subtract" || operation == "-") op = Operation::Subtract;
	else if (operation == "Multiply" || operation == "*") op = Operation::Multiply;
	else if (operation == "Divide" || operation == "/") op = Operation::Divide;

	switch (op)
	{
	case Operation::Add:
		total = arg1 + arg2;
		break;
	case Operation::Subtract:
		total = arg1 - arg2;
		break;
	case Operation::Multiply:
		total = arg1 * arg2;
		break;
	case Operation::Divide:
		total = arg1 / arg2;
		break;
	default:
		break;
	}
	
	std::cout << arg1 << " " << operation << " " << arg2 << " = " << total << std::endl;
}

