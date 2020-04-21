class Complejo{
	private:
		int real;
		int imaginario;
	public:
		Complejo();
		void setComplejo(int ,int );
		void print();
		Complejo Suma(Complejo );
		Complejo Suma(Complejo ,Complejo);
		Complejo Suma(Complejo ,int );
		Complejo Producto(Complejo );
		Complejo Producto(Complejo ,Complejo );
		Complejo Producto(Complejo ,int);
		Complejo Sqrt();
		Complejo Sqrt(Complejo);
		Complejo Abs();
		Complejo Abs(Complejo );
		double Fase();
		double Fase(Complejo );
};
