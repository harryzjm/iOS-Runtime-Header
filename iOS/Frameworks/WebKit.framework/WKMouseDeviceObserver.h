//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKMouseDeviceObserver : NSObject
{
    _Bool _hasMouseDevice;
    unsigned long long _startCount;
    struct RetainPtr<id<BSInvalidatable>> _token;
    struct OSObjectPtr<NSObject<OS_dispatch_queue>*> _deviceObserverTokenQueue;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasMouseDevice; // @synthesize hasMouseDevice=_hasMouseDevice;
- (void)_setHasMouseDeviceForTesting:(_Bool)arg1;
- (void)mousePointerDevicesDidChange:(id)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

