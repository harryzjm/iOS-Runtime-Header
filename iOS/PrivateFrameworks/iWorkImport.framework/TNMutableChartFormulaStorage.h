//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TNMutableChartFormulaStorage
{
}

- (unsigned long long)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (void)addFormula:(id)arg1 withFormulaID:(CDStruct_ed6d627d)arg2;
- (void)setFormulaList:(id)arg1 forKey:(unsigned long long)arg2;
- (id)mutableFormulaListForType:(unsigned long long)arg1;
- (void)clearFormulaListForKey:(unsigned long long)arg1;
- (void)setDirection:(int)arg1;
- (id)initWithChartFormulaStorage:(id)arg1;

@end
