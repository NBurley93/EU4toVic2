#ifndef EU4RELATIONS_H
#define EU4RELATIONS_H

#include "Date.h"
#include "newParser.h"
#include "EU4RelationDetails.h"
#include <map>

namespace EU4
{
	class EU4Relations : commonItems::parser
	{
	public:
		EU4Relations(std::istream& theStream);
		const std::map<std::string, EU4RelationDetails>& getRelations() const { return relations; }

	private:
		std::map<std::string, EU4RelationDetails> relations;
	};
}

#endif // EU4RELATIONS_H