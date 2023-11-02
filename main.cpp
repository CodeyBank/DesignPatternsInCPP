/*****************************************************************//**
 * \file   singleton.cpp
 * \brief  singleton design pattern illustrations
 * 
 * \author Stanley.Ezeh
 * \date   November 2023
 *********************************************************************/

#include <iostream>
#include "logger.h"

int main()
{
    Logger::GetInstance().AddMessage("Initializing ...");
    Logger::GetInstance().AddMessage("Connecting to database ...");
    Logger::GetInstance().AddMessage("Connection to database established");
    Logger::GetInstance().AddMessage("Retrieving data ...");

    Logger::GetInstance().PrintMessage();
    return 0;
}

