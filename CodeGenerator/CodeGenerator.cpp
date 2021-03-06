// CodeGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CsvReader.h"
#include <string>
#include "JGenerator.h"
#include "white_csv_reader.h"
#include "white_test_generator.h"

int main()
{
	//csv_reader csv("");
	/*std::cout << csv.tests.front().test_number << endl;
	std::cout << csv.tests.front().shipping << endl;
	std::cout << csv.tests.front().gift_wrap << endl;
	std::cout << csv.tests.front().product_type << endl;
	std::cout << csv.tests.front().price << endl;
	std::cout << csv.tests.front().dd << '.' << csv.tests.front().mm << '.' << csv.tests.front().yy <<  endl;
	std::cout << csv.tests.front().total_deposit << endl;*/

	//j_generator generator(csv.tests);
	const white_csv_reader csv("WhiteBox.csv");
	white_test_generator(csv.orders);
	cout << "Success" << endl;
	cin.get();
    return 0;
}

