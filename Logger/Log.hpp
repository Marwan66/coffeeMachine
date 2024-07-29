#ifndef LOG_HPP
#define LOG_HPP

#include <string>

class Log {
    public:
        enum LogLevel{
        LogLevelTrace,
        LogLevelWarning,
        LogLevelError
    };
    private:
        int m_LogLevel;
        char const * m_logLevelInStr;

    public:
        void SetLevel(LogLevel level);
        void logError(LogLevel level, char const * msg);
};

#endif