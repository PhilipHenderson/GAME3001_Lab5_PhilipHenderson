#pragma once
#ifndef __NAVIGATION_OBJECT__
#define __NAVIGATION_OBJECT__
#include "DisplayObject.h"

class NavigationObject : public DisplayObject
{
public:
	//constructor
	NavigationObject();

	//destructor
	~NavigationObject();
	// Inherited from DisplayObject
	virtual void draw() override = 0;
	virtual void update() override = 0;
	virtual void clean() override = 0;

	//gettersa dn setters
	glm::vec2 getGridPosition() const;
	void setGridPosition(float col, float row);

private:
	glm::vec2 m_gridPosition;

};


#endif /* defined (__NAVIGATION_OBJECT__) */