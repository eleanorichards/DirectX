#ifndef _INPUT_H_
#define _INPUT_H_
class  Input
{
public:
	 Input();
	 Input(const Input&);
	~ Input();

	void Initialise();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool isKeyDown(unsigned int);

private:
	bool m_keys[256];
};
#endif // !_INPUT_H_
