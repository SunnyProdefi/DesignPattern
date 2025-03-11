#include "singleton.h"

Singleton::Singleton() {}
Singleton::~Singleton() {}

Singleton& Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}

void Singleton::setNum(int num) { num_ = num; }

int Singleton::getNum() { return num_; }
