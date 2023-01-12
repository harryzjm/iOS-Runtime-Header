//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoordinationCore/COServiceAddOnProvider-Protocol.h>

@class COHomeHubAdapter, COHomeKitAdapter, MTTimerManager, NSString;

__attribute__((visibility("hidden")))
@interface COTimerAddOnProvider : NSObject <COServiceAddOnProvider>
{
    MTTimerManager *_timerManager;
    COHomeKitAdapter *_homekit;
    COHomeHubAdapter *_homehub;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) COHomeHubAdapter *homehub; // @synthesize homehub=_homehub;
@property(readonly, nonatomic) COHomeKitAdapter *homekit; // @synthesize homekit=_homekit;
@property(readonly, nonatomic) MTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
- (id)serviceAddOn;
- (id)init;
- (id)initWithTimerManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
