#include "factory_method_pattern.h"

void ConcreteProductA::use() { std::cout << "Using ConcreteProductA\n"; }

void ConcreteProductB::use() { std::cout << "Using ConcreteProductB\n"; }

std::unique_ptr<Product> ConcreteCreatorA::factoryMethod() { return std::make_unique<ConcreteProductA>(); }

std::unique_ptr<Product> ConcreteCreatorB::factoryMethod() { return std::make_unique<ConcreteProductB>(); }