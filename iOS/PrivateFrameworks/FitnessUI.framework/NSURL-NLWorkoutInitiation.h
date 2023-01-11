//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (NLWorkoutInitiation)
+ (_Bool)_fiui_isValidWorkoutScheme:(id)arg1;
+ (id)fiui_workoutPickerURL;
+ (id)fiui_startBackdatedWorkoutURLWithDate:(id)arg1 workoutIdentifier:(id)arg2 workoutType:(unsigned long long)arg3 isIndoor:(_Bool)arg4 swimmingLocationType:(long long)arg5 showPicker:(_Bool)arg6;
+ (id)fiui_pauseWorkoutURLWithIdentifier:(id)arg1;
+ (id)fiui_endWorkoutURLWithIdentifier:(id)arg1;
+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;
+ (id)fiui_workoutPickerURLComponents;
+ (id)fiui_workoutInitiationURLWithWorkout:(id)arg1 presentConfiguration:(_Bool)arg2 skipCountdown:(_Bool)arg3;
+ (id)_fiui_supportedQueryItemNames;
+ (id)fiui_URLEnergyUnit;
+ (id)fiui_URLDistanceUnit;
+ (id)fiui_URLTimeUnit;
+ (id)_fiui_supportedSchemes;
- (double)fiui_goalValue;
- (unsigned long long)fiui_goalType;
- (_Bool)fiui_presentGoalConfiguration;
- (id)fiui_activityType;
- (_Bool)fiui_isValidMachineWorkoutLaunchURL;
- (_Bool)fiui_isValidStartWorkoutURL;
- (_Bool)fiui_isStartBackdatedWorkoutURL;
- (_Bool)fiui_isPauseWorkoutURL;
- (_Bool)fiui_isEndWorkoutURL;
@end

