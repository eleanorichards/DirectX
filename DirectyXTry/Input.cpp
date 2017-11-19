#include "stdafx.h"
#include "Input.h"

Input::Input()
{
}

Input::Input(const Input &)
{
}

Input::~Input()
{
}

void Input::Initialise()
{
	int i;

	// Initialize all the keys to being released and not pressed.
	for (i = 0; i<256; i++)
	{
		m_keys[i] = false;
	}

	return;
}

void Input::KeyDown(unsigned int input)
{
	m_keys[input] = true;
	return;
}

void Input::KeyUp(unsigned int input)
{
	m_keys[input] = false;
	return;
}

bool Input::isKeyDown(unsigned int key)
{
	return m_keys[key];
}
