//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNMeCardSharingResult, CNMeCardSharingSettingsViewController;

@protocol CNMeCardSharingSettingsViewControllerDelegate <NSObject>

@optional
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateSharingState:(_Bool)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(CNMeCardSharingSettingsViewController *)arg1;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateWithSharingResult:(CNMeCardSharingResult *)arg2;
@end
