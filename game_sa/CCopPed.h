#pragma once

#include "plugin\plugin.h"
#include "CPed.h"
#include "eCopType.h"

#pragma pack(push, 4)
class PLUGIN_API CCopPed : public CPed
{
public:
	Int32 field_79C;
	eCopType       m_copType;
	Int32 field_7A4;
	class CCopPed *m_pCopPartner;
	CPed          *m_apCriminalsToKill[5];
	Int8 field_7C0;

	CCopPed();
	~CCopPed();

	void SetPartner(CCopPed* partner);
	void AddCriminalToKill(CPed* criminal);
	void RemoveCriminalToKill(CPed* likeUnused, int criminalIdx);
	void ClearCriminalsToKill();
};
#pragma pack(pop)

VALIDATE_SIZE(CCopPed, 0x7C4);