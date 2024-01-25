#pragma once
#include "ParticleData.h"
class CollisionSphere
{
	

public:
	float radius;
	float posX;
	float posY;
	float posZ;

	CollisionSphere();

	void collision(ParticleData* data);
};

