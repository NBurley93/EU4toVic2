#ifndef OUTPUT_H
#define OUTPUT_H

#include <ostream>
#include "../Diplomacy/Agreement.h"
#include "../Army/Army.h"
#include "../Country/Country.h"
#include "../Factory/Factory.h"
#include "../Leader/Leader.h"
#include "../Localisation/Localisation.h"
#include "../Party/Party.h"
#include "../Pop/Pop.h"
#include "../Province/Province.h"
#include "../Reforms/Reforms.h"
#include "../Army/Regiment.h"
#include "../Diplomacy/Relation.h"
#include "../Reforms/UncivReforms.h"
#include "ModFile.h"
#include "../../Mappers/VersionParser/VersionParser.h"

namespace V2
{
	std::ostream& operator<<(std::ostream& output, const Agreement& agreement);
	std::ostream& operator<<(std::ostream& output, const Army& army);
	std::ostream& operator<<(std::ostream& output, const Country& country);
	std::ostream& operator<<(std::ostream& output, const Factory& factory);
	std::ostream& operator<<(std::ostream& output, const Leader& leader);
	std::ostream& operator<<(std::ostream& output, const Localisation& localisation);
	std::ostream& operator<<(std::ostream& output, const Party& party);
	std::ostream& operator<<(std::ostream& output, const Pop& pop);
	std::ostream& operator<<(std::ostream& output, const Province& province);
	std::ostream& operator<<(std::ostream& output, const Reforms& reforms);
	std::ostream& operator<<(std::ostream& output, const Regiment& regiment);
	std::ostream& operator<<(std::ostream& output, const Relation& relation);
	std::ostream& operator<<(std::ostream& output, const UncivReforms& uncivReforms);
	std::ostream& operator<<(std::ostream& output, const ModFile& modFile);
}

namespace mappers
{
	std::ostream& operator<<(std::ostream& output, const PartyType& partyDetails);
	std::ostream& operator<<(std::ostream& output, const VersionParser& versionParser);
}

#endif // OUTPUT_H