#pragma once

class GameObject;

static class Collision
{
private:
	friend class GameObject;
private:
	Collision() = delete;

public:
	bool AABB(const GameObject& a, const GameObject& b) const;
	bool OBB(const GameObject& a, const GameObject& b) const;
};

