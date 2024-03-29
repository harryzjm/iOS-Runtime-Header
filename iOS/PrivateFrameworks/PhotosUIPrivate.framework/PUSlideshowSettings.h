//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

@class NSString, OKProducerPreset;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettings : PXSettings
{
    _Bool _allowUserInteractivity;
    _Bool _slideshowSettingsEnableFullscreenSupport;
    OKProducerPreset *_currentPreset;
    double _interactiveTransitionFingerTrackingBoxRadiusMinValue;
    double _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
    double _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
    double _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
    double _interactiveTransitionProgressThresholdMinValue;
    double _interactiveTransitionProgressThresholdMaxValue;
    double _interactiveTransitionProgressThresholdDefaultValue;
    double _interactiveTransitionProgressThresholdIncrementValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
    NSString *_currentPresetUniqueIdentifier;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentPresetUniqueIdentifier; // @synthesize currentPresetUniqueIdentifier=_currentPresetUniqueIdentifier;
@property(nonatomic) _Bool slideshowSettingsEnableFullscreenSupport; // @synthesize slideshowSettingsEnableFullscreenSupport=_slideshowSettingsEnableFullscreenSupport;
@property(nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
@property(nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
@property(nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@property(nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
@property(nonatomic) double interactiveTransitionProgressThresholdIncrementValue; // @synthesize interactiveTransitionProgressThresholdIncrementValue=_interactiveTransitionProgressThresholdIncrementValue;
@property(nonatomic) double interactiveTransitionProgressThresholdDefaultValue; // @synthesize interactiveTransitionProgressThresholdDefaultValue=_interactiveTransitionProgressThresholdDefaultValue;
@property(nonatomic) double interactiveTransitionProgressThresholdMaxValue; // @synthesize interactiveTransitionProgressThresholdMaxValue=_interactiveTransitionProgressThresholdMaxValue;
@property(nonatomic) double interactiveTransitionProgressThresholdMinValue; // @synthesize interactiveTransitionProgressThresholdMinValue=_interactiveTransitionProgressThresholdMinValue;
@property(nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusIncrementValue=_interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
@property(nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusDefaultValue=_interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
@property(nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusMaxValue=_interactiveTransitionFingerTrackingBoxRadiusMaxValue;
@property(nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusMinValue=_interactiveTransitionFingerTrackingBoxRadiusMinValue;
@property(nonatomic) _Bool allowUserInteractivity; // @synthesize allowUserInteractivity=_allowUserInteractivity;
- (void)setDefaultValues;
- (void)setDefaultPresetTransitionValues;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (_Bool)transitionSettingsAreDefaults;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
@property(retain, nonatomic) OKProducerPreset *currentPreset; // @synthesize currentPreset=_currentPreset;
- (id)archiveValueForKey:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)performPostSaveActions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)parentSettings;

@end

