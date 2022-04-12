#include "header.hpp"

void ft_replace(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2)
{
    std::string buffer;
    std::string AllFile;
    std::size_t i = std::string::npos;
    std::size_t pose = 0;
    while (getline(infile, buffer))
    {
        AllFile.append(buffer.append("\n"));
    }

    if (s1 == "" || std::string(s1).compare(s2) == 0)    ;
    else
        while ((i = AllFile.find(s1, pose)) != std::string::npos)
        {
            AllFile.erase(i, s1.length());  
            AllFile.insert(i, s2);
            pose = i + s2.length();
        }
    outfile << AllFile << std::endl;
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

    if (!file)
    {
        std::cout << "Error : file not found" << std::endl;
        outfile.close();
        return (1);
    }
    else
        ft_replace(file, outfile, argv[2], argv[3]);

    file.close();
    outfile.close();
    return 0;
}
