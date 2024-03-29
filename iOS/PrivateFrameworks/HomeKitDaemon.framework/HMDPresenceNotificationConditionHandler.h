//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString;
@protocol HMDPresenceNotificationConditionPresenceProvider;

__attribute__((visibility("hidden")))
@interface HMDPresenceNotificationConditionHandler : HMFObject
{
    HMDHome *_home;
    id <HMDPresenceNotificationConditionPresenceProvider> _presenceProvider;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMDPresenceNotificationConditionPresenceProvider> presenceProvider; // @synthesize presenceProvider=_presenceProvider;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (_Bool)conditionPasses:(id)arg1 registrationUser:(id)arg2;
- (_Bool)canHandleCondition:(id)arg1;
- (id)initWithHome:(id)arg1 presenceProvider:(id)arg2;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

