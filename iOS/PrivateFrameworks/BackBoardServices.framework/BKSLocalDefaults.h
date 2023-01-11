//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface BKSLocalDefaults : BSAbstractDefaultDomain
{
    _Bool _disableStudyLogAccelerometerLogging;
    _Bool _disableStudyLogALSLogging;
    _Bool _disableStudyLogGyroLogging;
}

@property(nonatomic) _Bool disableStudyLogGyroLogging; // @synthesize disableStudyLogGyroLogging=_disableStudyLogGyroLogging;
@property(nonatomic) _Bool disableStudyLogALSLogging; // @synthesize disableStudyLogALSLogging=_disableStudyLogALSLogging;
@property(nonatomic) _Bool disableStudyLogAccelerometerLogging; // @synthesize disableStudyLogAccelerometerLogging=_disableStudyLogAccelerometerLogging;
- (id)valueForKey:(id)arg1 defaultValueProvider:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)migrateDefaultsIfNecessary;
- (void)_bindAndRegisterDefaults;
- (id)init;

// Remaining properties
@property(nonatomic) float ALSDelayOnUnlock; // @dynamic ALSDelayOnUnlock;
@property(nonatomic, getter=isALSEnabled) _Bool ALSEnabled; // @dynamic ALSEnabled;
@property(nonatomic) long long ALSEpoch; // @dynamic ALSEpoch;
@property(retain, nonatomic) NSDictionary *ALSUserPreferences; // @dynamic ALSUserPreferences;
@property(nonatomic) int brightnessCurve; // @dynamic brightnessCurve;
@property(nonatomic, getter=isDigitizerSignpostsEnabled) _Bool digitizerSignpostsEnabled; // @dynamic digitizerSignpostsEnabled;
@property(nonatomic) _Bool digitizerVisualizeHitTestRegions; // @dynamic digitizerVisualizeHitTestRegions;
@property(nonatomic) _Bool digitizerVisualizeTouches; // @dynamic digitizerVisualizeTouches;
@property(nonatomic) _Bool disableCAOverscan; // @dynamic disableCAOverscan;
@property(nonatomic) _Bool disableCAScaling; // @dynamic disableCAScaling;
@property(nonatomic) _Bool disableCAYUV; // @dynamic disableCAYUV;
@property(nonatomic) _Bool disableCloneMirroring; // @dynamic disableCloneMirroring;
@property(nonatomic) _Bool disableStudyLogBTKeyboardEventLogging; // @dynamic disableStudyLogBTKeyboardEventLogging;
@property(nonatomic) _Bool disableStudyLogBTKeyboardEventRedirection; // @dynamic disableStudyLogBTKeyboardEventRedirection;
@property(nonatomic) _Bool disableStudyLogButtonLogging; // @dynamic disableStudyLogButtonLogging;
@property(nonatomic) _Bool disableStudyLogCameraKeyLogging; // @dynamic disableStudyLogCameraKeyLogging;
@property(nonatomic) _Bool disableStudyLogHomeButtonLogging; // @dynamic disableStudyLogHomeButtonLogging;
@property(nonatomic) _Bool disableStudyLogPowerButtonLogging; // @dynamic disableStudyLogPowerButtonLogging;
@property(nonatomic) _Bool disableStudyLogVolumeKeyLogging; // @dynamic disableStudyLogVolumeKeyLogging;
@property(nonatomic, getter=isDitheringEnabled) _Bool ditheringEnabled; // @dynamic ditheringEnabled;
@property(nonatomic) _Bool fenceArbiterDisabled; // @dynamic fenceArbiterDisabled;
@property(nonatomic) _Bool fenceArbiterSkipPreFenceSynchronize; // @dynamic fenceArbiterSkipPreFenceSynchronize;
@property(nonatomic) float fenceArbiterTimeoutInterval; // @dynamic fenceArbiterTimeoutInterval;
@property(nonatomic) _Bool forceCloneMirroring; // @dynamic forceCloneMirroring;
@property(nonatomic) __weak NSString *forceMirroredOrientation; // @dynamic forceMirroredOrientation;
@property(retain, nonatomic) NSData *globalMouseDevicePreferences; // @dynamic globalMouseDevicePreferences;
@property(nonatomic) _Bool hideAppleLogoOnLaunch; // @dynamic hideAppleLogoOnLaunch;
@property(nonatomic) _Bool ignoreAccelerometerAndOrientationEvents; // @dynamic ignoreAccelerometerAndOrientationEvents;
@property(nonatomic) _Bool ignoreTetheringPreferences; // @dynamic ignoreTetheringPreferences;
@property(nonatomic) __weak NSArray *loggingTypesEnabled; // @dynamic loggingTypesEnabled;
@property(nonatomic) NSArray *mouseInterpolation; // @dynamic mouseInterpolation;
@property(nonatomic) _Bool showBuildNumber; // @dynamic showBuildNumber;
@property(nonatomic) _Bool simulatePhoneButton; // @dynamic simulatePhoneButton;
@property(nonatomic, getter=isSteveNoteOverscanEnabled) _Bool steveNoteOverscanEnabled; // @dynamic steveNoteOverscanEnabled;
@property(nonatomic, getter=isSteveNoteRotationEnabled) _Bool steveNoteRotationEnabled; // @dynamic steveNoteRotationEnabled;
@property(nonatomic) _Bool visualizeMousePointer; // @dynamic visualizeMousePointer;

@end
