#include <iostream>
#include <memory>
#include <boost/filesystem.hpp>

int main(int argc, char* argv[])
{
    boost::filesystem::path path = "/usr/share/cmake/module";

    if(path.is_relative()) {
        std::cout << "Path is relative " << std::endl;
    }
    else {
        std::cout << "Path is not relative " << std::endl;
    }

    return 0;
}