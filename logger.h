#pragma once
#include <string>
#include <iostream>
#include <vector>

class Logger
{
private:
	Logger() { std::cout << "Logger class created\n"; };
	~Logger() { std::cout << "Logger class destroyed\n"; }
	

	std::vector<std::string> m_logs;

public:
	static Logger& GetInstance();
	void PrintMessage();
	void AddMessage(std::string str);
};

