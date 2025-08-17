#pragma once
#include <iostream>
#include <thread>
#include <chrono>

class Dot_run_mark
{
public:
	Dot_run_mark();
	int position_x;
	int position_y;
	void show_run_mark(bool);

private:
	const int time_delay_micro_seconds = 400;
};
