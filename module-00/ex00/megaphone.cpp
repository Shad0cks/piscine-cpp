#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    int y;
    char temp;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while (argv[i])
    {
        y = 0;
        temp = argv[i][y];
        while (temp != '\0')
        {
            temp = argv[i][y];
            if (temp <= 'z' && temp >= 'a')
                temp = std::toupper(temp);
            std::cout << temp;
            y++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}