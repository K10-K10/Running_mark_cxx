#pragma once
#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

class Percent_bar
{
public:
	Percent_bar();
	int position_x;
	int position_y;
	unsigned int max_value = 0;
	unsigned int current_value = 0;
	void show_percent_bar();

private:
	unsigned int horizontal_size;
	unsigned int percent;
	unsigned int percent_bar_size;
};
