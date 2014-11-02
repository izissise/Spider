#include "ALog.hpp"

ALog::ALog()
: _parser(nullptr), _good(false)
{
    
}

ALog::operator bool() const
{
    return isGood();
}


void ALog::setParser(IReadable *parser)
{
    _parser = parser;
}

bool ALog::isGood() const {
    return _good;
}
