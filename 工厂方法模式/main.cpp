#include "factory_method_pattern.h"

int main()
{
    std::unique_ptr<Creator> creatorA = std::make_unique<ConcreteCreatorA>();
    std::unique_ptr<Product> productA = creatorA->factoryMethod();
    productA->use();

    std::unique_ptr<Creator> creatorB = std::make_unique<ConcreteCreatorB>();
    std::unique_ptr<Product> productB = creatorB->factoryMethod();
    productB->use();

    return 0;
}
