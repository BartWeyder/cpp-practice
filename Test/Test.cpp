// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "TransportationProblem.h"


int main()
{
	trp::Mat&& res = trp::north_west({ 20,30,30,10 }, { 30,40,20 });
	for (auto &i : res)
	{
		for (auto &j : i)
			std::cout << j << ' ';
		std::cout << std::endl;
	}
}

