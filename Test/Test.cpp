// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "TransportationProblem.h"


int main()
{
	auto&& res = TransportationProblem::northWest({ 20,30,30,10 }, { 30,40,20 });
	auto loop = TransportationProblem::findLoop({ 1,3 }, { {20,10,-1,-1}, {-1,20,-1,-1}, {10,10,-1,10} });
	/*for (auto &i : res)
	{
		for (auto &j : i)
			std::cout << j << ' ';
		std::cout << std::endl;
	}*/
	for (auto &j : loop)
		std::cout << '[' << j.first << ',' << j.second << "] ";
}

