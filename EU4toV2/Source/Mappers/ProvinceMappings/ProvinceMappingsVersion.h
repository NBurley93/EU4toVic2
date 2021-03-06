#ifndef PROVINCE_MAPPING_VERSION_H
#define PROVINCE_MAPPING_VERSION_H

#include "newParser.h"
#include "ProvinceMapping.h"
#include "../../EU4World/EU4Version.h"

namespace mappers
{
	class ProvinceMappingsVersion: commonItems::parser
	{
	public:
		ProvinceMappingsVersion(const std::string& versionString, std::istream& theStream);

		const EU4::Version& getVersion() const { return version; }
		std::vector<ProvinceMapping> getMappings() const { return mappings; }

	private:
		EU4::Version version;
		std::vector<ProvinceMapping> mappings;
	};
}

#endif // PROVINCE_MAPPING_VERSION_H