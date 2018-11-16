// Copyright 2016-2018 CronoSoft. All Rights Reserved.

#include "CRPGAttribute.h"

UCRPGAttribute::UCRPGAttribute()
{	
}

TMap<FName, FCRPGAttributeData> UCRPGAttribute::InitAttributes(UDataTable* LocalAttributesTable)
{
	TMap<FName, FCRPGAttributeData> AttributesMapTemp;
	if (LocalAttributesTable != nullptr)
	{
		// Create an empty array
		TArray<FCRPGAttributeData*> AttributesArray;
		// If AttributesTable is not null, Fill the array
		static const TCHAR* ContextString(TEXT("GENERAL"));
		LocalAttributesTable->GetAllRows<FCRPGAttributeData>(ContextString, AttributesArray);
		// Loop the array and fill the Attributes TMap
		for (FCRPGAttributeData* a : AttributesArray)
		{
			FCRPGAttributeData b = *a;
			AttributesMapTemp.Emplace(b.Name, b);
		}
	}
	return AttributesMapTemp;
}
