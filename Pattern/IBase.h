#pragma once
#include <iostream>
#include <string>

class IBase
{
public:
	virtual std::string GetName() = 0;
	virtual void SayHello() = 0;

};

