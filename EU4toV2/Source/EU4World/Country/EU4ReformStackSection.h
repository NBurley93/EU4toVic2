#ifndef EU4_REFORM_STACK_SECTION_H
#define EU4_REFORM_STACK_SECTION_H

#include <set>
#include "newParser.h"

namespace EU4
{
	class ReformStackSection : commonItems::parser
	{
	public:
		ReformStackSection(std::istream& theStream);
		const std::set<std::string>& getReforms() const { return reforms; }

	private:
		std::set<std::string> reforms;
	};
}

#endif // EU4_REFORM_STACK_SECTION_H
