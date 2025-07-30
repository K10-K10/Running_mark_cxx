#include "dot_run_mark.hpp"

Dot_run_mark::Dot_run_mark()
{
	Dot_run_mark::position_x = 0;
	Dot_run_mark::position_y = 0;
}

void Dot_run_mark::show_run_mark(bool flag_loop)
{
	while (flag_loop)
	{
		std::cout << "" << std::flush;
		for (int i = 0; i < 3; i++)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(Dot_run_mark::time_delay_micro_seconds));
			std::cout << "." << std::flush;
		}
		for (int i = 0; i < 3; i++)
		{
			std::cout << "\x08 \x08";
		}
		std::cout << "\r";
		std::this_thread::sleep_for(std::chrono::milliseconds(Dot_run_mark::time_delay_micro_seconds));
	}
}
