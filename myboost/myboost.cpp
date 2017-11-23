// myboost.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <boost/regex.hpp>
#include <boost/signals.hpp>
#include <boost/lambda/lambda.hpp> 

#include <iostream> 
#include <cassert> 

struct print_sum { 
	void operator()(int x, int y) const { std::cout << x+y << std::endl; } 
}; 

struct print_product {

	void operator()(int x, int y) const { std::cout << x*y << std::endl; }

};

int _tmain(int argc, _TCHAR* argv[])
{
	boost::signal2<void, int, int, boost::last_value<void>, std::string> sig;
	sig.connect(print_sum());
	sig.connect(print_product());
	sig(3, 5);
	std::string line;     
	boost::regex pat( "^Subject: (Re: |Aw: )*(.*)" );    
	while (std::cin)
	{         
		std::getline(std::cin, line);         
		boost::smatch matches;        
		if (boost::regex_match(line, matches, pat))  
			std::cout << matches[2] << std::endl;     
	}
	return 0;
}
