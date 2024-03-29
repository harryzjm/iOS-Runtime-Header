//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDReferenceCollection, EDWorkbook;

__attribute__((visibility("hidden")))
@interface CHDFormula
{
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReferences:(id)arg1;
+ (id)formulaWithReference:(id)arg1;
- (void).cxx_destruct;
- (id)constantValuesFromConstantStringFormula;
- (_Bool)isConstantStringFormula;
- (void)prepareTokens;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)setReferences:(id)arg1;
- (id)references;
- (void)setWorkbook:(id)arg1;
- (id)initWithReferences:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (id)referencesFromFormula;

@end

