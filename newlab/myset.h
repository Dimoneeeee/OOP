#ifndef MYSET_H
#define MYSET_H

class myset {
private:
	char* value;
	int count;
public:
	myset() : count(0), value(nullptr) { }
	myset(const myset&);
	~myset();
	inline bool empty() const { return count == 0; }
	inline char getChar(int position) const { return value[position]; }
	inline int size() const { return count; }
	void push(const char item);
	void remove(const char item);
	void print();
	void input(int size);
	bool isEqual(const myset& mset);
	bool subset(const char item);
	bool subset(const myset& mset);

	myset& operator-=(const char);
	myset& operator=(const myset&);
	bool operator!=(const myset&);
	bool operator==(const myset&);
	bool operator>(const myset&);
	friend myset operator-(const myset&, const char);
};

#endif // !MYSET