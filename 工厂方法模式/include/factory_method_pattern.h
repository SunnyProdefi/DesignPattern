#pragma once
#ifndef FACTORY_METHOD_PATTERN_H
#define FACTORY_METHOD_PATTERN_H

#include <iostream>
#include <memory>

// 抽象产品类
class Product
{
public:
    virtual void use() = 0;
    virtual ~Product() = default;
};

// 具体产品 A
class ConcreteProductA : public Product
{
public:
    void use() override;
};

// 具体产品 B
class ConcreteProductB : public Product
{
public:
    void use() override;
};

// 抽象工厂类
class Creator
{
public:
    virtual std::unique_ptr<Product> factoryMethod() = 0;
    virtual ~Creator() = default;
};

// 具体工厂 A
class ConcreteCreatorA : public Creator
{
public:
    std::unique_ptr<Product> factoryMethod() override;
};

// 具体工厂 B
class ConcreteCreatorB : public Creator
{
public:
    std::unique_ptr<Product> factoryMethod() override;
};

#endif  // FACTORY_METHOD_PATTERN_H