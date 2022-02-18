#include "header.hpp"


int main(int argc, char const *argv[])
{
    FragTrap robot1("trump");
    FragTrap unknowRobot;

    unknowRobot = robot1;
    robot1.attack("obama");
    unknowRobot.highFivesGuys();
    return 0;
}
