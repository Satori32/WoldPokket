#include <iostream>
#include <map>
#include <cstdint>
#include <functional>
#include <string>
#include <unordered_map>
/** /
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
/**/
template<class T> using List = std::map<std::intmax_t, T>;
/*are you need more?*/
class Image {};
class Sound {};
class Area {};
/**/

enum class Tags {
	None,
	A,
	B,
	C,
};

template<class Idx,class T> using TagedList = std::unordered_map<Idx, T>;

struct Data
{
	List<Image> Images;
	List<Sound> Soubds;
	List<Area> Areas;
	List<std::string> Texts;
	template<class... T> using F = std::map < std::string, std::function<bool* (T&...)>>;
	List<F<>> Functions;
};



int main() {
	List<Data> WorldPokket;

	WorldPokket[1].Images[0];

	TagedList<Tags, Data> TL;
	TL[Tags::A].Images[0];
}