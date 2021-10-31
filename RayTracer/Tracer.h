#pragma once
#include "Types.h"
#include "ColorBuffer.h"

class Scene;

class Tracer
{
public:
	void Trace(const ColorBuffer& coloeBuffer, Scene* scene);

public:
	int samples = 3;
};