//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCRetryCounter : NSObject
{
    _Bool _scheduled;
    unsigned int _retryCount;
    long long _latestRetry;
    long long _throttleHash;
}

@property(readonly, nonatomic) long long throttleHash; // @synthesize throttleHash=_throttleHash;
@property(readonly, nonatomic) long long latestRetry; // @synthesize latestRetry=_latestRetry;
@property(readonly, nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
- (void)incrementRetry;
- (void)schedule;
- (id)initWithThrottleHash:(long long)arg1;

@end
