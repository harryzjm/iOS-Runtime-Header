//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TSCEWarning : NSObject
{
    _Bool _ignored;
    NSDictionary *_metadata;
}

+ (void)reportComparisonWarningInContext:(struct TSCEWarningReportingContext *)arg1 leftType:(BOOL)arg2 rightType:(BOOL)arg3;
+ (void)reportAutomaticUnitConversionWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportLossOfUnitsWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportMismatchedSizesWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportBoolToNumberConversionWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportDayOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportMonthOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportNonNumericCellWarningInContext:(struct TSCEWarningReportingContext *)arg1 reference:(id)arg2;
+ (_Bool)setHasVisibleWarnings:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool ignored; // @synthesize ignored=_ignored;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(const struct TSKUIDStruct *)arg2 andCellID:(struct TSUCellCoord)arg3;
- (_Bool)isIgnored;
- (id)type;
- (id)copyByRemappingEntityIDs:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

