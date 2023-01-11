//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _CDRateAndTotalLimiter
{
    long long _totalCount;
    long long _currentTotal;
}

@property long long currentTotal; // @synthesize currentTotal=_currentTotal;
@property(readonly) long long totalCount; // @synthesize totalCount=_totalCount;
- (id)description;
- (_Bool)debited;
- (_Bool)credit;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;

@end
