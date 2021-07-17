void main()
{
	static main;
	int x;
	x=call(main);
	printf("%d",x);
	getch();
}

int call(int address)
{
	address++;
	return address;
}

// op  1


// concept -->  static main so , by default value of main will become 1 
//             which is pass over by actual to formal paramter i.e 1	
