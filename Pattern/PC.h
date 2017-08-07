#pragma once
#include "IBase.h"
#include <memory>
#include "Windows.h"
#include "Mac.h"


class PC : public IBase
{
public:

	PC(): m_pc(std::make_unique<Windows>())
	{
	}

	~PC()
	{
		
	}

	std::string GetName() 
	{
		return m_pc->GetName();
	}

	void SayHello()
	{
		m_pc->SayHello();
	}

	void InstalToWindows()
	{
		m_pc = std::make_unique<Windows>();
	}

	void InstalToMac()
	{
		m_pc = std::make_unique<Mac>();
	}

private:
	std::unique_ptr<IBase> m_pc;
};

