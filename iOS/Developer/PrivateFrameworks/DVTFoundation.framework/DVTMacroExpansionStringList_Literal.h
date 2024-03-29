//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DVTMacroExpansionStringList_Literal
{
    NSArray *_literalStrings;
}

+ (id)newWithStringForm:(id)arg1 literalStrings:(id)arg2;
- (void).cxx_destruct;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dvt_stringForm;
- (_Bool)dvt_isLiteral;
- (id)initWithStringForm:(id)arg1 literalStrings:(id)arg2;

@end

