//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;

@interface HMDDeviceSetupManager : HMFObject
{
    id <HMFLocking> _lock;
    int _proxSetupNotificationToken;
    _Bool _running;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)stopAdvertising;
- (void)startAdvertising;
- (id)followUpController;
@property(readonly, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)dealloc;
- (id)init;

@end
