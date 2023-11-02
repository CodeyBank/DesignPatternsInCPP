#include "logger.h"


Logger& Logger::GetInstance()
{
	static Logger* s_instance = new Logger;
	return *s_instance;
}

void Logger::PrintMessage()
{
	for (auto& message : m_logs) {
		std::cout << message << std::endl;
	}
}

void Logger::AddMessage(std::string str)
{
	m_logs.push_back(str);
}
