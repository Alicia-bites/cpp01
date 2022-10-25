#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("YOUHOUUU");
	harl.complain("");
	harl.complain("123456789");
	harl.complain("-1");
	return (0);
}