//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDFormula : NSObject
{
    struct __CFData *mPackedData;
}

+ (id)formula;
- (_Bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (_Bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (_Bool)fixTableOfConstantsRefs;
- (_Bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (_Bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (_Bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(_Bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (_Bool)convertToIntersect:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(_Bool *)arg1 withEDLinks:(id)arg2;
- (_Bool)convertLastRefsToArea;
- (_Bool)convertToList:(unsigned int)arg1 withFinalParen:(_Bool)arg2;
- (_Bool)convertToList:(unsigned int)arg1;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (_Bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (_Bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (id)saveArgs:(unsigned int)arg1 andDelete:(_Bool)arg2;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;
- (_Bool)isBaseFormula;
- (_Bool)isSharedFormula;
- (void)updateCleanedWithEvaluationStack:(_Bool)arg1;
- (_Bool)isCleanedWithEvaluationStack;
- (void)updateContainsRelativeReferences:(_Bool)arg1;
- (_Bool)isContainsRelativeReferences;
- (void)setCleaned:(_Bool)arg1;
- (_Bool)isCleaned;
- (_Bool)isSupportedFormula;
- (void)setWarningParameter:(id)arg1;
- (id)warningParameter;
- (void)setWarning:(int)arg1;
- (id)warning;
- (int)warningType;
- (void)setOriginalFormulaString:(id)arg1;
- (id)originalFormulaString;
- (_Bool)convertTokensToSharedAtRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (void *)xlPtgs;
- (void)populateXlPtg:(struct XlPtg *)arg1 index:(unsigned int)arg2;
- (_Bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;
- (_Bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (_Bool)removeTokenAtIndex:(unsigned int)arg1;
- (void)removeAllTokens;
- (_Bool)copyTokenFromXlPtg:(struct XlPtg *)arg1;
- (_Bool)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;
- (_Bool)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int *)arg2;
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int *)arg3;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (unsigned int)tokenCount;
- (_Bool)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithFormula:(id)arg1;
- (id)init;
- (struct EDToken *)tokenAtIndex:(unsigned int)arg1;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

