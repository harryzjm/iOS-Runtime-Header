//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class PUTopPeopleWallpaperSuggestionsDistancingContext, UITextField;

__attribute__((visibility("hidden")))
@interface PUTopPeopleWallpaperSuggestionsDebugSettingsDistancingSettingsView : UIView
{
    PUTopPeopleWallpaperSuggestionsDistancingContext *_distancingContext;
    UITextField *_timePivotTextField;
    UITextField *_locationPivotTextField;
    UITextField *_peoplePivotTextField;
    UITextField *_sceneprintPivotTextField;
    UITextField *_timeFactorTextField;
    UITextField *_locationFactorTextField;
    UITextField *_peopleFactorTextField;
    UITextField *_sceneprintFactorTextField;
    UITextField *_maximumNumberOfSuggestionsWithPeopleTextField;
    UITextField *_maximumNumberOfSuggestionsWithoutPeopleTextField;
}

- (void).cxx_destruct;
@property(readonly) UITextField *maximumNumberOfSuggestionsWithoutPeopleTextField; // @synthesize maximumNumberOfSuggestionsWithoutPeopleTextField=_maximumNumberOfSuggestionsWithoutPeopleTextField;
@property(readonly) UITextField *maximumNumberOfSuggestionsWithPeopleTextField; // @synthesize maximumNumberOfSuggestionsWithPeopleTextField=_maximumNumberOfSuggestionsWithPeopleTextField;
@property(readonly) UITextField *sceneprintFactorTextField; // @synthesize sceneprintFactorTextField=_sceneprintFactorTextField;
@property(readonly) UITextField *peopleFactorTextField; // @synthesize peopleFactorTextField=_peopleFactorTextField;
@property(readonly) UITextField *locationFactorTextField; // @synthesize locationFactorTextField=_locationFactorTextField;
@property(readonly) UITextField *timeFactorTextField; // @synthesize timeFactorTextField=_timeFactorTextField;
@property(readonly) UITextField *sceneprintPivotTextField; // @synthesize sceneprintPivotTextField=_sceneprintPivotTextField;
@property(readonly) UITextField *peoplePivotTextField; // @synthesize peoplePivotTextField=_peoplePivotTextField;
@property(readonly) UITextField *locationPivotTextField; // @synthesize locationPivotTextField=_locationPivotTextField;
@property(readonly) UITextField *timePivotTextField; // @synthesize timePivotTextField=_timePivotTextField;
- (void)setMaximumNumberOfSuggestionsWithoutPeople:(id)arg1;
- (void)setMaximumNumberOfSuggestionsWithPeople:(id)arg1;
- (void)setSceneprintFactor:(id)arg1;
- (void)setPeopleFactor:(id)arg1;
- (void)setLocationFactor:(id)arg1;
- (void)setTimeFactor:(id)arg1;
- (void)setSceneprintPivot:(id)arg1;
- (void)setPeoplePivot:(id)arg1;
- (void)setLocationPivot:(id)arg1;
- (void)setTimePivot:(id)arg1;
- (id)initWithDistancingContext:(id)arg1;

@end

