//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKDateCache, HKHealthStore, HKHeartRhythmAvailability, HKHostingAreaLayoutView, HKKeyValueDomain, HRElectrocardiogramOnboardingManager, NPSManager, NSArray, NSDictionary, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController
{
    _Bool _deletingSamples;
    NSArray *_allDemoResults;
    HKHostingAreaLayoutView *_pickerInputView;
    UIPickerView *_resultPicker;
    NSArray *_allAlgorithmVersions;
    HKHostingAreaLayoutView *_algorithmVersionPickerInputView;
    UIPickerView *_algorithmVersionPicker;
    NPSManager *_syncManager;
    NSArray *_demoResultKeys;
    HKHealthStore *_healthStore;
    HKDateCache *_dateCache;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
    HRElectrocardiogramOnboardingManager *_onboardingManager;
    HKKeyValueDomain *_keyValueDomain;
    NSArray *_keyValueDomainContentKeys;
    NSDictionary *_keyValueDomainContent;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDeletingSamples) _Bool deletingSamples; // @synthesize deletingSamples=_deletingSamples;
@property(retain, nonatomic) NSDictionary *keyValueDomainContent; // @synthesize keyValueDomainContent=_keyValueDomainContent;
@property(retain, nonatomic) NSArray *keyValueDomainContentKeys; // @synthesize keyValueDomainContentKeys=_keyValueDomainContentKeys;
@property(readonly, nonatomic) HKKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(retain, nonatomic) HRElectrocardiogramOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) NSArray *demoResultKeys; // @synthesize demoResultKeys=_demoResultKeys;
@property(readonly, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) UIPickerView *algorithmVersionPicker; // @synthesize algorithmVersionPicker=_algorithmVersionPicker;
@property(retain, nonatomic) HKHostingAreaLayoutView *algorithmVersionPickerInputView; // @synthesize algorithmVersionPickerInputView=_algorithmVersionPickerInputView;
@property(readonly, nonatomic) NSArray *allAlgorithmVersions; // @synthesize allAlgorithmVersions=_allAlgorithmVersions;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerDidEnterAdaptiveModal;
- (void)heartRhythmAvailabilityDidUpdate;
- (void)didDismissOnboarding;
- (void)didCompleteOnboarding;
- (void)didTapOnElectrocardiogram:(id)arg1;
- (void)_resetOnboarding;
- (void)_presentOnboardingManagerWithOnboardingType:(long long)arg1;
- (void)_startUpgrade;
- (void)_startFullOnboarding;
- (id)_onboardingCompletedAlgorithmVersion;
- (unsigned long long)_overrideAlgorithmVersion;
- (void)_saveOverrideAlgorithmVersionIfNeeded:(long long)arg1;
- (void)_presentAvailabilityInternalSettingsViewController;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)clearCellIndexNumberLabels;
- (void)updateCellIndexNumberLabels;
- (void)keyboardDidDismiss:(id)arg1;
- (id)displayableDescriptionFromValue:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_styleSubtitleCellForTableView:(id)arg1;
- (id)_styleValue1CellForTableView:(id)arg1 inputView:(id)arg2;
- (id)_buttonCellForTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *allDemoResults; // @synthesize allDemoResults=_allDemoResults;
@property(readonly, nonatomic) HKHostingAreaLayoutView *pickerInputView; // @synthesize pickerInputView=_pickerInputView;
@property(readonly, nonatomic) UIPickerView *resultPicker; // @synthesize resultPicker=_resultPicker;
- (void)reloadKeyValueDomainContent;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

