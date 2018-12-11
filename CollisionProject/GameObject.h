#pragma once
#include "Math/SMath.h"

using namespace shootingStar::math;

class GameObject
{
private:
	Vector3 position;
	Quaternion lotation;
	Vector3 scale;
public:
	GameObject();
	~GameObject();
};

