#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H

class Monkey {
public:
	Monkey() = default;
	virtual ~Monkey() = default;
	virtual Monkey* Clone() = 0;
	virtual void Play() = 0;
};


#endif // _PROTOTYPE_H
