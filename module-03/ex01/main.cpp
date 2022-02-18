#include "header.hpp"


int main(int argc, char const *argv[])
{
    ScavTrap robot1("billy");
    ScavTrap unknowRobot;

    unknowRobot = robot1;

    robot1.guardGate();
    unknowRobot.attack("unknow");

    return 0;
}
