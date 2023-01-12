//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCThrottleBase : NSObject
{
    NSString *_name;
    unsigned int _initialRetryCount;
    unsigned int _finalRetryCount;
    unsigned int _maximumElementCount;
    long long _minimumNsecsBetweenRetries;
    long long _maximumNsecsBetweenRetries;
    long long _nsecsBeforeForgettingCounter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long nsecsBeforeForgettingCounter; // @synthesize nsecsBeforeForgettingCounter=_nsecsBeforeForgettingCounter;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isBlocking;
- (long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned int *)arg2 now:(long long)arg3;
- (long long)retryBackoff:(unsigned int)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;

@end

