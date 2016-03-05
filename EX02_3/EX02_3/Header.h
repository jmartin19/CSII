class EvenNumber //an integer evenly divisible by 2
{
private:
	int value; //numeric value of even number
public:
	EvenNumber() //constructs an even number with a value of 0
	{
		value = 0;
	}
	EvenNumber(int v) //constructs an even number with a passed in value
	{
		value = v;
	}
	int getValue() //returns value of even number
	{
		return value;
	}
	EvenNumber getNext(int current) //returns next even number as an even number object
	{
		int nextNumber = current + 2; //adds two to value of current even number
		EvenNumber next(nextNumber); //constructs object to be returned
		return next;															//Derek - for this we do not need to create a constructor that has objects to																be returned that actually is not a good thing, all you need is a nextnumber =																			current +2; return nextnumber (same for next one) -3
	}
	EvenNumber getPrevious(int current) //returns previous even number as an even number object
	{
		int previousNumber = current - 2; //subtracts two to the value of current even number
		EvenNumber previous(previousNumber); //constructs object to be returned
		return previous;
	}

};