#include <iostream>
#include "Log.hpp"

void Log::SetLevel (LogLevel level)
{
    m_LogLevel = level;
    if (level == LogLevelTrace)
    {
        m_logLevelInStr = "Trace";
    }
    else if (level == LogLevelWarning)
    {
        m_logLevelInStr = "Warning";
    }
    else if (level == LogLevelError)
    {
        m_logLevelInStr = "Error";
    }
    else
    {

    }
}

void Log::logError (LogLevel level, char const * msg)
{
        if (m_LogLevel == LogLevelTrace)
        {
            std::cout << "[" << m_logLevelInStr << "]" << msg << std::endl; 
        }
        else if (m_LogLevel == LogLevelWarning)
        {
            if (level >= LogLevelWarning)
            {
                std::cout << "[" << m_logLevelInStr << "]" << msg << std::endl; 
            }
            else
            {
                ;
            }
        }
        else if (m_LogLevel == LogLevelError)
        {
            if (level >= LogLevelError)
            {
                std::cout << "[" << m_logLevelInStr << "]" << msg << std::endl; 
            }
            else
            {
                ;
            }
        }
        else
        {

        }

}