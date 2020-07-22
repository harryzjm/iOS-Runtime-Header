//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKCategoryType;

@interface HKCategorySample
{
    long long _value;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
- (void)_setValue:(long long)arg1;
@property(readonly) long long value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_valueDescription;
- (id)_validateConfiguration;
@property(readonly) HKCategoryType *categoryType;
- (id)init;
- (long long)hk_integerValue;
- (id)_timeZoneName;
- (id)_bedtimeAlarmWithCalendar:(id)arg1;

@end

