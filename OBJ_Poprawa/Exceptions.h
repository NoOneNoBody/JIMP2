#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include<iostream>

class Exceptions
{
    public:
        Exceptions();
        virtual ~Exceptions();
        virtual void printException()=0;
    protected:

    private:
};


class ExceptionCantOpenFile: public Exceptions
{
public:
    ExceptionCantOpenFile(){}
    void printException()
    {
        std::cerr<<"Cannot open file"<<std::endl;
    }
};

class ExceptionWrongCommand: public Exceptions
{
private:
    unsigned int line;

public:
    ExceptionWrongCommand(unsigned int _line):Exceptions(), line(_line){}
    void printException()
    {
        std::cerr<<"Wrong command at line: "<<line<<std::endl;
    }
};

#endif // EXCEPTIONS_H
