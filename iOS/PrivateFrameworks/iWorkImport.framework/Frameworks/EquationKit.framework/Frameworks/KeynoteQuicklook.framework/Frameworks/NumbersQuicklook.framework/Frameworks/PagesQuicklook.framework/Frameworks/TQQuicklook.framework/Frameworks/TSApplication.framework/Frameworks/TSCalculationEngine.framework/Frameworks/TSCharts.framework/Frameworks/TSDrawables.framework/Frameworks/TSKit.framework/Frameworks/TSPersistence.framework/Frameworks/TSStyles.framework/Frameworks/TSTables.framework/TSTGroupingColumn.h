//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSKit/TSKSosBase.h>

@class TSKFormat, TSULocale;

@interface TSTGroupingColumn : TSKSosBase
{
    struct UUIDData<TSP::UUIDData> _groupingColumnUid;
    struct UUIDData<TSP::UUIDData> _columnUid;
    long long _groupingType;
    struct TSCEFunctor _groupingFunctor;
    TSKFormat *_groupingFormat;
    _Bool _groupingFormatComputed;
    TSULocale *_docLocale;
    struct TSKUIDStruct _uniqueObjectUID;
}

+ (long long)finerGroupingTypeFor:(long long)arg1 groupTypesToAvoid:(id)arg2;
+ (long long)finerGroupingTypeFor:(long long)arg1;
+ (long long)coarserGroupingTypeFor:(long long)arg1 groupTypesToAvoid:(id)arg2;
+ (long long)coarserGroupingTypeFor:(long long)arg1;
+ (_Bool)groupingTypeIsAnyDateType:(long long)arg1;
+ (id)shortStringForGroupingType:(long long)arg1 locale:(id)arg2;
+ (id)stringForGroupingType:(long long)arg1 locale:(id)arg2;
+ (id)stringForGroupingType:(long long)arg1;
+ (id)shortStringForGroupingType:(long long)arg1;
+ (id)shortStringForQuarterOfYearTypeForLocale:(id)arg1;
+ (id)shortStringForMonthOfYearTypeForLocale:(id)arg1;
+ (id)shortStringForYearQuarterTypeForLocale:(id)arg1;
+ (id)shortStringForYearWeekTypeForLocale:(id)arg1;
+ (id)shortStringForDayTypeForLocale:(id)arg1;
+ (id)shortStringForDayOfWeekTypeForLocale:(id)arg1;
+ (id)shortStringForMonthTypeForLocale:(id)arg1;
+ (id)shortStringForYearTypeForLocale:(id)arg1;
+ (id)stringForQuarterOfYearTypeForLocale:(id)arg1;
+ (id)stringForMonthOfYearTypeForLocale:(id)arg1;
+ (id)stringForYearQuarterTypeForLocale:(id)arg1;
+ (id)stringForYearWeekTypeForLocale:(id)arg1;
+ (id)stringForDayTypeForLocale:(id)arg1;
+ (id)stringForDayOfWeekTypeForLocale:(id)arg1;
+ (id)stringForMonthTypeForLocale:(id)arg1;
+ (id)stringForYearTypeForLocale:(id)arg1;
+ (id)stringForUniqueTypeForLocale:(id)arg1;
+ (id)shortStringForQuarterOfYearType;
+ (id)shortStringForMonthOfYearType;
+ (id)shortStringForYearQuarterType;
+ (id)shortStringForYearWeekType;
+ (id)shortStringForDayType;
+ (id)shortStringForDayOfWeekType;
+ (id)shortStringForMonthType;
+ (id)shortStringForYearType;
+ (id)stringForQuarterOfYearType;
+ (id)stringForMonthOfYearType;
+ (id)stringForYearQuarterType;
+ (id)stringForYearWeekType;
+ (id)stringForDayType;
+ (id)stringForDayOfWeekType;
+ (id)stringForMonthType;
+ (id)stringForYearType;
+ (id)stringForUniqueType;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct TSKUIDStruct uniqueObjectUID; // @synthesize uniqueObjectUID=_uniqueObjectUID;
@property(readonly, nonatomic) const struct TSCEFunctor *groupingFunctor; // @synthesize groupingFunctor=_groupingFunctor;
@property(readonly, nonatomic) long long groupingType; // @synthesize groupingType=_groupingType;
- (void)encodeToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1;
- (id)groupValueForValue:(id)arg1 calcEngine:(id)arg2;
- (id)p_groupingFormatWithLocale:(id)arg1;
- (void)setFunctorForType;
- (void)getUUIDBytesForColumnUid:(unsigned char [16])arg1;
- (void)getUUIDBytesForGroupingColumnUid:(unsigned char [16])arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct TSKUIDStruct columnUid;
@property(readonly, nonatomic) struct TSKUIDStruct groupingColumnUid;
- (id)initWithColumnIndex:(struct TSUModelColumnIndex)arg1 groupingType:(long long)arg2 inTableInfo:(id)arg3;
- (id)initWithColumnUid:(struct TSKUIDStruct)arg1 groupingType:(long long)arg2;
- (id)initWithGroupingColumnUid:(struct TSKUIDStruct)arg1 columnUid:(struct TSKUIDStruct)arg2 groupingType:(long long)arg3;

@end

