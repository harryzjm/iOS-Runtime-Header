//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface LAPSFetchOldPasscodeBackoffTimerController : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    long long _timeout;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (void)_startTimerWithTimeout:(long long)arg1;
- (void)start;
- (id)initWithTimeout:(long long)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

