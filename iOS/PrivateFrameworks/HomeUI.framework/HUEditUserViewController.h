//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUAboutResidentDeviceFooterViewDelegate-Protocol.h>
#import <HomeUI/HUAboutResidentDeviceViewControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@class HUAboutResidentDeviceFooterView, HUEditUserItemManager, HUPendingAccessoriesGridViewController, NSString;

@interface HUEditUserViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate>
{
    HUEditUserItemManager *_editUserItemManager;
    HUPendingAccessoriesGridViewController *_pendingAccessoriesViewController;
    HUAboutResidentDeviceFooterView *_aboutResidentDeviceFooterView;
}

@property(retain, nonatomic) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView; // @synthesize aboutResidentDeviceFooterView=_aboutResidentDeviceFooterView;
@property(readonly, nonatomic) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController; // @synthesize pendingAccessoriesViewController=_pendingAccessoriesViewController;
@property(readonly, nonatomic) HUEditUserItemManager *editUserItemManager; // @synthesize editUserItemManager=_editUserItemManager;
- (void).cxx_destruct;
- (id)_lazyAboutResidentDeviceFooterView;
- (void)_removeUser;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (void)learnMoreLinkTapped:(id)arg1;
- (id)childViewControllersToPreload;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)userID;
- (id)initWithItem:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

