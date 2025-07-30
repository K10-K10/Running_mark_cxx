#pragma once
#include <iostream>
#include <thread>
#include <chrono>

class Rotation_run_mark
{
public:
	Rotation_run_mark();
	int senter_x;
	int senter_y;
	void show_run_mark(bool);

private:
	const int time_delay_micro_seconds = 100;
};
