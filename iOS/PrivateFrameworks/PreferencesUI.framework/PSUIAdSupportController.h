//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/ADPrivacyViewControllerDelegate-Protocol.h>

@class ADPrivacyViewController, NSString, UITableViewCell, UIView;

@interface PSUIAdSupportController : PSListController <ADPrivacyViewControllerDelegate>
{
    id _restrictionsChangedObserver;
    id _effectiveSettingsChangedObserver;
    UITableViewCell *_limitAdTrackingCell;
    UIView *_originalAccessoryView;
    long long _optInStatus;
    ADPrivacyViewController *_adPrivacyController;
}

@property(retain, nonatomic) ADPrivacyViewController *adPrivacyController; // @synthesize adPrivacyController=_adPrivacyController;
@property(nonatomic) long long optInStatus; // @synthesize optInStatus=_optInStatus;
@property(retain, nonatomic) UIView *originalAccessoryView; // @synthesize originalAccessoryView=_originalAccessoryView;
@property(retain, nonatomic) UITableViewCell *limitAdTrackingCell; // @synthesize limitAdTrackingCell=_limitAdTrackingCell;
@property(retain, nonatomic) id effectiveSettingsChangedObserver; // @synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver;
@property(retain, nonatomic) id restrictionsChangedObserver; // @synthesize restrictionsChangedObserver=_restrictionsChangedObserver;
- (void).cxx_destruct;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)userDidTapAdPreferences:(id)arg1;
- (void)userDidTapLearnMoreLink:(id)arg1;
- (void)userDidTapDoneButton:(id)arg1;
- (void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2;
- (id)limitAdTrackingEnabled:(id)arg1;
- (_Bool)canChangeLimitAdTracking;
- (void)resetAdID;
- (void)reloadLimitAdTrackingSpecifier;
- (void)refreshOptInStatus;
- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
