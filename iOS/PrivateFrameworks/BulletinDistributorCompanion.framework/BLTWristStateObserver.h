//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/MCProfileConnectionObserver-Protocol.h>

@class NSString;

@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver>
{
    _Bool _isWristDetectDisabled;
}

@property(readonly, nonatomic) _Bool isWristDetectDisabled; // @synthesize isWristDetectDisabled=_isWristDetectDisabled;
- (void)_updateWristDetectSetting;
- (_Bool)_isWristDetectionDisabled;
- (_Bool)_wristDetectionDisabledPreference;
- (_Bool)_wristDetectionEnabledRestriction;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
