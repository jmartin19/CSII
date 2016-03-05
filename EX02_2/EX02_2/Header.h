class QuadraticEquation //equation with two roots and three coefficients
{
private:
	double a; //first coefficient
	double b; //second coefficient
	double c; //third coefficient
public:
	double geta() { return a; } //returns first coefficient
	double getb() { return b; } //returns second coefficient
	double getc() { return c; } //returns third coefficient
	double getDescriminant() //calculates and returns descriminant
	{
		int descriminant = (pow(b, 2)) - (4 * a*c);
		return descriminant;
	}
	double getRoot1(double descriminant) //returns first root
	{
		int root = 0;
		if (descriminant < 0)
			return root;
		else
		{																		//Derek- math is a little off.. due to some () same for next -2
			root = (-b + pow(b*b - (4 * a*c), 1 / 2)) / (2 * a);
			return root;
		}
	}
	double getRoot2(double descriminant) //returns second root
	{
		int root = 0;
		if (descriminant < 0)
			return root;
		else
		{
			root = (-b - pow(b*b - (4 * a*c), 1 / 2)) / (2 * a);
			return root;
		}
	}
	QuadraticEquation() //constructs a quadratic equation with coefficients 1, 2, and 3
	{
		a = 1; //default first coefficient
		b = 2; //default second coefficient
		c = 3; //default third coefficient
	}
	QuadraticEquation(double first, double second, double third) //constructs a quadratic equation with passed in coefficients
	{
		a = first; //sets first coefficient
		b = second; //sets second coefficient
		c = third; //sets third coefficient
	}
};