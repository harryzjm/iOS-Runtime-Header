//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKStylusDeviceObserver : NSObject
{
    _Bool _hasStylusDevice;
    unsigned long long _startCount;
    struct RetainPtr<NSTimer> _changeTimer;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasStylusDevice; // @synthesize hasStylusDevice=_hasStylusDevice;
- (void)changeTimerFired:(id)arg1;
- (void)startChangeTimer:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;
- (void)start;
- (void)setHasStylusDevice:(_Bool)arg1;
- (id)init;

@end

