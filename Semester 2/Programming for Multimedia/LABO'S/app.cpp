#include <iostream>
#include <vector>
// Vector = Arraylist java

// Aanduiden dat je in debug build bent
#ifdef _DEBUG
//MACRO je vervangt een lijn met deze lijn
#define ASSERT(condition) if (!condition ) CRASH(__FILE__, __LINE__); 
#else
// Doet deze assert als je in release build bent
#define ASSERT(condition)
#endif
bool is_sorted(std::vector<int> list)
{
	for (int i = 0; i + 1 <= list.size(); i++)
	{
		if (!(list[i] <= list[i + 1]))
		{
			//We found a bug
		}
	}
}

void crash(std::string filename, int linenumber)
{
	std::cerr << "Crash ocurred in line " << filename << " on line " << linenumber;
	abort();
}

void sort(std::vector<int> list)
{
	assert list != null; // -ea
	// JUISTE CONDITIE ASSERTEN
	ASSERT(is_sorted(list));
}
#endif

int main() 
{
	
}