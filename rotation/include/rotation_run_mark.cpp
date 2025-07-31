#include "rotation_run_mark.hpp"

Rotation_run_mark::Rotation_run_mark()
{
	Rotation_run_mark::position_x = 0;
	Rotation_run_mark::position_y = 0;
}

void Rotation_run_mark::show_run_mark(bool flag_loop)
{
	while (flag_loop)
	{
		std::cout << "/" << std::flush;

		std::this_thread::sleep_for(std::chrono::milliseconds(Rotation_run_mark::time_delay_micro_seconds));
		std::cout << "\x08" << "-" << std::flush;

		std::this_thread::sleep_for(std::chrono::milliseconds(Rotation_run_mark::time_delay_micro_seconds));
		std::cout << "\x08" << "\\" << std::flush;

		std::this_thread::sleep_for(std::chrono::milliseconds(Rotation_run_mark::time_delay_micro_seconds));
		std::cout << "\x08" << "|" << std::flush;

		std::this_thread::sleep_for(std::chrono::milliseconds(Rotation_run_mark::time_delay_micro_seconds));
		std::cout << "\x08";
	}
}
