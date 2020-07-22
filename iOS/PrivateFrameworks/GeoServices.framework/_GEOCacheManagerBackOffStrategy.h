//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOCacheManagerBackOffStrategy : NSObject
{
    double _lastSuccess;
    double _lastFailure;
    double _maxTimeInSeconds;
}

+ (id)sharedInstance;
- (double)secondsToWait;
- (double)timeUntilWhenToWait;
- (double)_unsuccesfulTime;
- (void)registerFailure;
- (void)registerSuccess;
- (id)init;

@end

