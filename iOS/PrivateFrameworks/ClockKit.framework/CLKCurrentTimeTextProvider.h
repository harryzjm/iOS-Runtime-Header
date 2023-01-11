//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateComponents, NSString;

@interface CLKCurrentTimeTextProvider
{
    unsigned long long _calendarUnits;
    NSDateComponents *_sessionComponents;
    NSString *_sessionCacheKey;
    _Bool _sessionInProgress;
    NSDate *_overrideDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithTimeZone:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *overrideDate; // @synthesize overrideDate=_overrideDate;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_validate;
- (void)_endSession;
- (id)_sessionCacheKey;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (void)_startSessionWithDate:(id)arg1;
- (long long)_updateFrequency;
- (id)init;

@end
