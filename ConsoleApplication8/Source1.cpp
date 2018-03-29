

class Field
{
public:
	Field(int, int, int);
	~Field();

private:
	int side = 0;
	int allSquare = 0;
	int maxBlock = 0;
};

Field::Field(int s, int a, int m)
{
	side = s;
	allSquare = a;
	maxBlock = m;
}

Field::~Field()
{
}


