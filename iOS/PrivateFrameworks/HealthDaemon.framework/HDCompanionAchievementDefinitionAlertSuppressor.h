//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAchievementDefinitionAlertSuppressor-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDProfile, NSString;
@protocol HDAchievementDefinitionAlertSuppressorDelegate;

@interface HDCompanionAchievementDefinitionAlertSuppressor : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDAchievementDefinitionAlertSuppressor>
{
    HDProfile *_profile;
    _Bool _activityGoalIsSet;
    id <HDAchievementDefinitionAlertSuppressorDelegate> delegate;
}

@property(nonatomic) __weak id <HDAchievementDefinitionAlertSuppressorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_checkForMoveGoalWithDatabase:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (_Bool)alertsAreSuppressed;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

