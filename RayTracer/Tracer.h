#pragma once
#include "Types.h"

class Scene;

class Tracer
{
public:
	void Trace(const ColorBuffer& coloeBuffer, Scene* scene);
};