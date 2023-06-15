//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _NSSwiftTimeZone
{
    MISSING_TYPE *timeZone;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
@property(nonatomic, readonly) NSDate *nextDaylightSavingTimeTransition;
@property(nonatomic, readonly) double daylightSavingTimeOffset;
- (_Bool)isDaylightSavingTime;
@property(nonatomic, readonly) NSString *abbreviation;
@property(nonatomic, readonly) long long secondsFromGMT;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;
@property(nonatomic, readonly) NSData *data;
@property(nonatomic, readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) Class classForCoder;

// Remaining properties
@property(nonatomic, readonly) _Bool daylightSavingTime;

@end

