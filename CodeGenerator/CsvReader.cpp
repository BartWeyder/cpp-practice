#include "stdafx.h"
#include "CsvReader.h"
#include <fstream>
#include <string>

CsvReader::CsvReader(string file_name)
{

	string buff;
	ifstream test_file;
	test_file.open("test1-1.csv", ifstream::in);
	for (size_t i = 0; i < 7; i++)
	{
		getline(test_file, buff);
	}
	for (size_t i = 0; i < 12; i++)
	{
		getline(test_file, buff);
		tests.push_back(TestObject(buff));
	}
}

CsvReader::~CsvReader()
{
}