//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDBuildableFormula : NSObject
{
    struct EDBuildablePtg *mTree;
    int mWarning;
}

- (unsigned int)removeOptionalPtgArgs:(unsigned int)arg1 minArgs:(unsigned int)arg2;
- (_Bool)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned int)arg2 numArgs:(unsigned int)arg3;
- (_Bool)replaceArgPtgAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (int)argTokenTypeAtIndex:(unsigned int)arg1;
- (_Bool)argTokenIsDurationAtIndex:(unsigned int)arg1;
- (_Bool)copyToken:(unsigned int)arg1 from:(id)arg2;
- (void)copyToFormula:(id)arg1;
- (id)formula;
- (_Bool)isSupportedFormula;
- (int)warningType;
- (void)setWarning:(int)arg1;
- (_Bool)fixTableOfConstantsRefs;
- (_Bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (_Bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (_Bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (_Bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(_Bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(_Bool *)arg1 withEDLinks:(id)arg2;
- (_Bool)convertRefs:(unsigned int)arg1 toTypes:(int *)arg2;
- (_Bool)convertRefs:(unsigned int)arg1 toType:(int)arg2;
- (void)convertRefsInList:(struct EDBuildablePtg *)arg1 toType:(int)arg2;
- (_Bool)convertLastRefsToArea;
- (_Bool)convertToIntersect:(unsigned int)arg1;
- (_Bool)convertToList:(unsigned int)arg1 withFinalParen:(_Bool)arg2;
- (_Bool)convertToList:(unsigned int)arg1;
- (_Bool)isConstantList:(unsigned int)arg1;
- (_Bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (_Bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (_Bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (_Bool)insertName:(unsigned long long)arg1 link:(unsigned long long)arg2 external:(_Bool)arg3 atIndex:(unsigned int)arg4;
- (_Bool)makeArrayForLastToken:(unsigned long long)arg1;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (void)removeTokenAtIndex:(unsigned long long)arg1;
- (void)replaceStringInStringTokenAtIndex:(unsigned long long)arg1 content:(id)arg2;
- (id)stringFromStringTokenAtIndex:(unsigned long long)arg1;
- (int)tokenTypeAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (_Bool)shrinkSpanningRef:(struct EDBuildablePtg *)arg1;
- (_Bool)fixTableOfConstantsRef:(struct EDBuildablePtg *)arg1;
- (struct EDBuildablePtg *)tokenAtIndex:(unsigned long long)arg1 previousToken:(struct EDBuildablePtg **)arg2;
- (struct EDBuildablePtg *)tokenAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

