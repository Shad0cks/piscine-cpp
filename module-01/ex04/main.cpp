#include "include/header.hpp"

void ft_replace(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2)
{
    std::string buffer;
    std::size_t i = std::string::npos;
    while (getline(infile, buffer))
    {
        while ((i = buffer.find(s1)) != std::string::npos)
        {
            std::cout <<  i << std::endl;
            buffer.erase(i,s1.length());  
            buffer.insert(i, s2);
        }
        outfile << buffer << std::endl;
    }
    return ;
}

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error : Params nb" << std::endl;
        return (1);
    }
    
    std::ifstream file(argv[1]);
    std::string endFileName = argv[1];
    std::ofstream outfile (endFileName + ".replace");

    if (!file || !outfile)
    {
        std::cout << "Error : file not found" << std::endl;
        return (1);
    }

    ft_replace(file, outfile, argv[2], argv[3]);
    file.close();
    outfile.close();
    return 0;
}
