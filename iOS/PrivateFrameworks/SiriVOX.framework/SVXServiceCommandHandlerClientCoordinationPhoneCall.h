//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/AFMyriadEmergencyDelegate-Protocol.h>
#import <SiriVOX/SVXServiceCommandHandling-Protocol.h>

@class AFMyriadEmergencyManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandHandlerClientCoordinationPhoneCall : NSObject <AFMyriadEmergencyDelegate, SVXServiceCommandHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    AFMyriadEmergencyManager *_emergencyManager;
    NSObject<OS_dispatch_semaphore> *_waitForResult;
    _Bool _wasHandled;
    NSString *_identifier;
}

+ (Class)supportedCommandClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)emergencyCall:(id)arg1 wasHandled:(_Bool)arg2;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isCommandUUFR:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
