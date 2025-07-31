#include "percent.hpp"
#include <chrono>
#include <thread>

int main()
{
	Percent_bar percent_bar;
	percent_bar.max_value = 100;

	for (int i = 0; i <= 100; ++i)
	{
		percent_bar.current_value = i;
		percent_bar.show_percent_bar();
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}
	std::cout << std::endl;
	return 0;
}
