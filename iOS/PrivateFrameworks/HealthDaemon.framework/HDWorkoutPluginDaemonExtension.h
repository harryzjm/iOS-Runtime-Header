//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonExtension-Protocol.h>

@class HDAlertSuppressor, HDAppLauncher, HDBackgroundWorkoutRunner, HDCarouselServicesManager, HDCoreMotionWorkoutInterface, HDDaemon, HDHeartRateRecoveryManager, HDPowerSavingModeManager, HDQuietModeManager, NSString;

@interface HDWorkoutPluginDaemonExtension : NSObject <HDHealthDaemonExtension>
{
    HDDaemon *_daemon;
    HDAlertSuppressor *_alertSuppressor;
    HDAppLauncher *_appLauncher;
    HDBackgroundWorkoutRunner *_backgroundWorkoutRunner;
    HDCarouselServicesManager *_carouselServicesManager;
    HDCoreMotionWorkoutInterface *_coreMotionWorkoutInterface;
    HDHeartRateRecoveryManager *_heartRateRecoveryManager;
    HDPowerSavingModeManager *_powerSavingModeManager;
    HDQuietModeManager *_quietModeManager;
}

@property(readonly, nonatomic) HDQuietModeManager *quietModeManager; // @synthesize quietModeManager=_quietModeManager;
@property(readonly, nonatomic) HDPowerSavingModeManager *powerSavingModeManager; // @synthesize powerSavingModeManager=_powerSavingModeManager;
@property(readonly, nonatomic) HDHeartRateRecoveryManager *heartRateRecoveryManager; // @synthesize heartRateRecoveryManager=_heartRateRecoveryManager;
@property(readonly, nonatomic) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface; // @synthesize coreMotionWorkoutInterface=_coreMotionWorkoutInterface;
@property(readonly, nonatomic) HDCarouselServicesManager *carouselServicesManager; // @synthesize carouselServicesManager=_carouselServicesManager;
@property(readonly, nonatomic) HDBackgroundWorkoutRunner *backgroundWorkoutRunner; // @synthesize backgroundWorkoutRunner=_backgroundWorkoutRunner;
@property(readonly, nonatomic) HDAppLauncher *appLauncher; // @synthesize appLauncher=_appLauncher;
@property(readonly, nonatomic) HDAlertSuppressor *alertSuppressor; // @synthesize alertSuppressor=_alertSuppressor;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)initWithDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
