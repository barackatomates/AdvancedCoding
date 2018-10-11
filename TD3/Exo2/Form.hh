#include "../Exo1/Point.cpp"
class Form
{
	private:
		char* color;
		Point centre;
	public:
		virtual void Afficher() = 0;
		virtual void Deplacer() = 0;
};
