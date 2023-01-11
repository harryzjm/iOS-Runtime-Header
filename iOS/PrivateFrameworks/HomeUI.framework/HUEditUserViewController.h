//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUAboutResidentDeviceFooterViewDelegate-Protocol.h>
#import <HomeUI/HUAboutResidentDeviceViewControllerDelegate-Protocol.h>
#import <HomeUI/HUAccessorySettingsItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/UINavigationControllerDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HFUserItem, HUAboutResidentDeviceFooterView, HUAccessorySettingsItemModuleController, HUEditUserItemManager, HUPendingAccessoriesGridViewController, NSString;

@interface HUEditUserViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate>
{
    HFUserItem *_userItem;
    HUEditUserItemManager *_editUserItemManager;
    HUPendingAccessoriesGridViewController *_pendingAccessoriesViewController;
    HUAccessorySettingsItemModuleController *_userSettingsItemModuleController;
    HUAboutResidentDeviceFooterView *_aboutResidentDeviceFooterView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView; // @synthesize aboutResidentDeviceFooterView=_aboutResidentDeviceFooterView;
@property(retain, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController; // @synthesize userSettingsItemModuleController=_userSettingsItemModuleController;
@property(readonly, nonatomic) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController; // @synthesize pendingAccessoriesViewController=_pendingAccessoriesViewController;
@property(readonly, nonatomic) HUEditUserItemManager *editUserItemManager; // @synthesize editUserItemManager=_editUserItemManager;
@property(readonly, copy, nonatomic) HFUserItem *userItem; // @synthesize userItem=_userItem;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)_lazyAboutResidentDeviceFooterView;
- (void)_removeUser;
- (_Bool)moduleController:(id)arg1 shouldDisableItem:(id)arg2;
- (void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2;
- (void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;
- (id)itemModuleControllers;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (void)learnMoreLinkTapped:(id)arg1;
- (id)childViewControllersToPreload;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)userHandle;
- (void)doneButtonTapped:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithItem:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
