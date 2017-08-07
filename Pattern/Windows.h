#pragma once
#include "IBase.h"
class Windows :	public IBase
{
public:
	std::string GetName()
	{
		return m_name;
	}
	void SayHello()
	{
		std::cout << "Hello" << " " << m_name << std::endl;
	};
private:
	std::string m_name = "Windows";
};

