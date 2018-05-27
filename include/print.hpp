#include <string>
#include <fstream>
#include <iostream>


/** Объявляем функцию print с возвращаемым значением типа void и двумя входными параметрами */
void print(const std::string& text, std::ostream& out = std::cout);
/** Объявляем такую же функцию, но с другими входными параметрами*/
void print(const std::string& text, std::ofstream& out);
