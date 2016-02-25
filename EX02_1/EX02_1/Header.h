class Fan //machine that uses blades to push air
{
private:
	int speed; //speed of blades
	bool on; //whether the fan is currently on or not
	double radius; //distance from center of fan to outer edge of blade
public:
	Fan() //constructs a new fan with default values
	{
		speed = 1; //default speed
		on = false; //default on/off state
		radius = 5; //default radius
	}
	Fan(int newspeed, bool newon, double newradius) //constructs a new fan, accepting input values
	{
		speed = newspeed; //sets speed value to input speed
		on = newon; //sets on to input on
		radius = newradius; //sets radius to input radius
	}
	int getspeed() { return speed; } //gets speed of fan
	bool geton() { return on; } //gets on/off state of fan
	double getradius() { return radius; } //gets radius of fan
	void setspeed(int newspeed) { speed = newspeed; } //change speed of fan
	void seton(bool newon) { on = newon; } //set fan to on or off
	void setradius(double newspeed) { radius = newspeed; } //change radius of fan
};