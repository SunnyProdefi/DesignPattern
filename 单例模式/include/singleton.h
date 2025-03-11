#pragma once
#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
private:
    Singleton();                                      // 私有化构造函数
    ~Singleton();                                     // 私有化析构函数（防止外部 delete）
    Singleton(const Singleton&) = delete;             // 禁止拷贝构造
    Singleton& operator=(const Singleton&) = delete;  // 禁止赋值

    int num_;

public:
    static Singleton& getInstance();
    void setNum(int num);
    int getNum();
};

#endif  // SINGLETON_H