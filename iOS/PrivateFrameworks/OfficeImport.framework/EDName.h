//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDFormula, EDString, NSString, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDName : NSObject
{
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
    EDString *_nameString;
    EDFormula *_formula;
    unsigned long long _sheetIndex;
}

+ (id)name;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sheetIndex; // @synthesize sheetIndex=_sheetIndex;
@property(readonly, nonatomic) EDFormula *formula; // @synthesize formula=_formula;
@property(retain, nonatomic) EDString *nameString; // @synthesize nameString=_nameString;
- (id)description;
@property(readonly, nonatomic) OITSUPointerKeyDictionary *maxWorksheetReferences;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
@property(readonly, nonatomic) NSString *internalFunctionName;
@property(readonly, nonatomic) _Bool isInternalFunction;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToEDName:(id)arg1;
- (id)init;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;
- (id)formulaString;

@end
