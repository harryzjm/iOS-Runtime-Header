//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _NSBackgroundActivityInternal : NSObject
{
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;
    CDUnknownBlockType _activity;
    CDUnknownBlockType _checkInHandler;
    _Bool _repeats;
    _Bool _preregistered;
    _Bool _appRefresh;
    NSObject<OS_xpc_object> *_additionalProperties;
    long long _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
}

- (void)dealloc;
- (id)init;

@end
