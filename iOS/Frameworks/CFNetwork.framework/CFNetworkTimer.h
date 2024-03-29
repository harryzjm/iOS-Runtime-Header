//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface CFNetworkTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _lastResumeTime;
    double _lastPauseTime;
    double _runTime;
    int _state;
}

- (void)dealloc;

@end

