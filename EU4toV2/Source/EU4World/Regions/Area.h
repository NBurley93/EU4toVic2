#ifndef EU4_AREA_H
#define EU4_AREA_H

#include "Color.h"
#include "newParser.h"
#include <set>

namespace EU4
{
	class Area : commonItems::parser
	{
	public:
		Area(std::istream& theStream);
		const std::set<int>& getProvinces() const { return provinces; }

	private:
		std::set<int> provinces;
	};
}

#endif // EU4_AREA_H