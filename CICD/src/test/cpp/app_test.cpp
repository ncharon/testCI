/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include "app.h"
#include <cassert>

int main() {
    CICD::Greeter greeter;
    assert(greeter.greeting().compare("Hello, World!") == 0);
    assert(greeter.carre(3),9);
    return 0;
}
