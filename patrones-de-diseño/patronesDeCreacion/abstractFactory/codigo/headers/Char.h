class Char {
protected:
        int _life;
        const char* _name;
public:
	virtual int getLife() const = 0;
        virtual void setLife(int life) = 0;
};
