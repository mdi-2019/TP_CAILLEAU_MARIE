#pragma once

#include <string>
#include <functional>
#include <map>
class Calculator
{
protected:

	using binary_operation = std::function<double(double, double)>;

	std::map<std::string, binary_operation> operations;


	double res=0;



	bool is_digit(char c)const
	{
		return c >= '0' && c <= '9' || c == ';';
	}


	std::string parse_number(std::string const& line, int & i)const
	{
		std::string res;
		for (; i < line.size(); ++i)
		{
			if (is_digit(line[i]))
			{
				res += line[i];
			}
			else
			{
				break;
			}
		}
		return res;
	}

	void advance_spaces(std::string line, int & i)const
	{
		while (i < line.size() && line[i] == ' ')
		{
			++i;
		}
	}

	binary_operation const& get_operation(char c)const
	{
		std::string s;
		s += c;
		return operations.at(s);
	}


public:

	std::string compute(std::string const& line)
	{
		int i = 0;

		advance_spaces(line, i);

		std::string left = parse_number(line, i);
		

		advance_spaces(line, i);

		char operation = line[i];
		++i;
		
		advance_spaces(line, i);

		std::string right = parse_number(line, i);

		advance_spaces(line, i);

		double a = std::stod(left);
		double b = std::stod(right);

		res = get_operation(operation)(a, b);

		std::string res_str = std::to_string(res);

		return res_str;
		
	}




	void __init()
	{
		operations.insert(std::pair<std::string, binary_operation>("+", std::plus<double>()));
		operations.insert(std::pair<std::string, binary_operation>("-", std::minus<double>()));
		operations.insert(std::pair<std::string, binary_operation>("*", std::multiplies<double>()));
		operations.insert(std::pair<std::string, binary_operation>("/", std::divides<double>()));
	}
	

};