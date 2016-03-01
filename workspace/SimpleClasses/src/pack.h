/*
 * pack.h
 *
 *  Created on: Mar 1, 2016
 *      Author: rtakacsux
 */

#ifndef PACK_H_
#define PACK_H_

class pack{
public:
	static int const cards = 52;
	pack();
	pack(std::istream &);
	~pack();
	void shuffle();
	card & next();
	void top();
	void copy_from(pack const &);
	card & get_card(int pos) const;
private:
	pack(pack const &);
	pack & operator=(pack const &);
	int position;
	card * pack_[cards];
};




#endif /* PACK_H_ */
