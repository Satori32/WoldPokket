#include <iostream>
#include <map>
#include <cstdint>
#include <functional>

template<class T>
class List {
public:
	typedef std::map<std::intmax_t, T> ListT;

	T& operator [](std::intmax_t N) {
		return L[N];
	}

	typename ListT::iterator begin() {
		return L.begin();
	}
	typename ListT::iterator end() {
		return L.end();
	}

protected:
	ListT L;
};

/*are you need more?*/
class Image {};
class Sound {};
class Area {};
/**/


struct Data
{
	List<Image> Images;
	List<Sound> Soubds;
	List<Area> Areas;
	//template<class... T> using F = std::map < std::string, std::function<bool(T&...)>;
	//List<F<>> Functions;
};

int main() {
	List<Data> WorldPokket;

	WorldPokket[1].Images[0];
}