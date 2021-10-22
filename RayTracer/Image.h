#pragma once
#include "ColorBuffer.h"
#include <string>

class Image
{
	friend class FrameBuffer;

public:
	~Image();
	bool Load(const std::string& filename, uint8_t alpha = 255);
	void Flip();

public:
	ColorBuffer colorBuffer;

private:
	uint8_t* buffer;

	int width = 0;
	int height = 0;
};