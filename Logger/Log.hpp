#ifndef LOG_HPP
#define LOG_HPP

#include <string>

class Log {
    public:
        Log(const Log&) = delete; /* Good to have to avoid having copies of the class in case of wrong initialization*/
        static Log& Get()
        {
            static Log instance;
            return instance;
        }
    private:
        Log() {}

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