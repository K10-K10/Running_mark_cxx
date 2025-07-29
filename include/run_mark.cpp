#include "run_mark.hpp"
#include <iostream>

Run_mark::Run_mark()
{
	Run_mark::senter_x = 0;
	Run_mark::senter_y = 0;
}

void Run_mark::show_run_mark(bool flag_done)
{
	std::cout << "/" << std::flush;

	std::this_thread::sleep_for(std::chrono::milliseconds(Run_mark::time_delay_micro_seconds));
	std::cout << "\x08" << "-" << std::flush;

	std::this_thread::sleep_for(std::chrono::milliseconds(Run_mark::time_delay_micro_seconds));
	std::cout << "\x08" << "\\" << std::flush;

	std::this_thread::sleep_for(std::chrono::milliseconds(Run_mark::time_delay_micro_seconds));
	std::cout << "\x08" << "|" << std::flush;

	std::this_thread::sleep_for(std::chrono::milliseconds(Run_mark::time_delay_micro_seconds));
	std::cout << "\x08" << "-" << std::flush;

	std::this_thread::sleep_for(std::chrono::milliseconds(Run_mark::time_delay_micro_seconds));
	std::cout << "\x08" << "\\" << std::flush;

	std::this_thread::sleep_for(std::chrono::milliseconds(Run_mark::time_delay_micro_seconds));
	std::cout << "\x08" << "|" << std::flush;
	std::this_thread::sleep_for(std::chrono::milliseconds(Run_mark::time_delay_micro_seconds));
	std::cout << "\x08";
}
