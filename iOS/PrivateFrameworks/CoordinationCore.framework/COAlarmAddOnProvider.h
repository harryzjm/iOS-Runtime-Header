//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COHomeHubAdapter, COHomeKitAdapter, MTAlarmManager, NSString;

__attribute__((visibility("hidden")))
@interface COAlarmAddOnProvider : NSObject
{
    MTAlarmManager *_alarmManager;
    COHomeKitAdapter *_homekit;
    COHomeHubAdapter *_homehub;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) COHomeHubAdapter *homehub; // @synthesize homehub=_homehub;
@property(readonly, nonatomic) COHomeKitAdapter *homekit; // @synthesize homekit=_homekit;
@property(readonly, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (id)serviceAddOn;
- (id)init;
- (id)initWithAlarmManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

