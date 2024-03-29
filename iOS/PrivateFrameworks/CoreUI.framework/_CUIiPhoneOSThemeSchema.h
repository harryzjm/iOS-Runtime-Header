//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeSchema.h"

__attribute__((visibility("hidden")))
@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
{
}

- (id)schemaEffectRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_22c2ae3f *)effectDefinitionWithName:(id)arg1;
- (unsigned long long)effectDefinitionCount;
- (const CDStruct_22c2ae3f *)sortedEffectDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_22c2ae3f *)_sortedEffectDefinitions;
- (const CDStruct_22c2ae3f *)effectDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialDefinitionCount;
- (id)schemaRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (id)widgetNameForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_c77fb927 *)categoryForElementDefinition:(const CDStruct_22c2ae3f *)arg1;
- (const CDStruct_22c2ae3f *)elementDefinitionWithName:(id)arg1;
- (unsigned long long)elementDefinitionCount;
- (const CDStruct_22c2ae3f *)sortedElementDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_22c2ae3f *)_sortedElementDefinitions;
- (const CDStruct_22c2ae3f *)elementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCategoryCount;
- (const CDStruct_c77fb927 *)elementCategoryAtIndex:(unsigned long long)arg1;
- (long long)schemaVersion;

@end

