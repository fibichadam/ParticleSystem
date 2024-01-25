#include "CollisionSphere.h"

CollisionSphere::CollisionSphere()
{
	radius = 100;
	posX = 0;
	posY = -250;
	posZ = 0;
}

void CollisionSphere::collision(ParticleData* data)
{
	for (int i = 0; i < 3000; i++)
	{
		if (ofDist(data->position[i].x, data->position[i].y, data->position[i].z, posX, posY, posZ) < data->radius[i] + radius)
		{
			ofVec3f normalized = (data->position[i] - ofVec3f(posX, posY, posZ)).getNormalized();
			data->position[i] = ofVec3f(
				normalized.x * (data->radius[i] + radius) + posX, 
				normalized.y * (data->radius[i] + radius) + posY, 
				normalized.z * (data->radius[i] + radius) + posZ);
		}
	}
}