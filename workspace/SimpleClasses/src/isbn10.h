/*
 * isbn10.h
 *
 *  Created on: Nov 26, 2015
 *      Author: rtakacsux
 */

#ifndef ISBN10_H_
#define ISBN10_H_

#include <iostream>
#include <istream>
#include <ostream>
#include <string>

class isbn10{

public:
	isbn10();
	explicit isbn10(std::string const &);
	~isbn10();

	bool is_valid()const;
	void send_to(std::ostream & = std::cout)const;
	void get_from(std::istream & = std::cin);
	bool is_equal(isbn10 const &)const;

private:
	std::string isbn_;
};


inline bool operator==(isbn10 const & lhs, isbn10 const & rhs){
	return lhs.is_equal(rhs);
}

inline bool operator!=(isbn10 const & lhs, isbn10 const & rhs){
	return !lhs.is_equal(rhs);
}

inline std::istream & operator>>(std::istream & in, isbn10 & val){
	val.get_from(in);
	return in;
}

inline std::ostream & operator<<(std::ostream & out, isbn10 const & val){
	val.send_to(out);
	return out;
}




#endif /* ISBN10_H_ */
