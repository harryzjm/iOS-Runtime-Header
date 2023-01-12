//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class DMCProfileViewController;

@protocol DMCProfileViewControllerDelegate <NSObject>
- (void)profileViewControllerDidSelectRemoveProfile:(DMCProfileViewController *)arg1;
- (_Bool)profileViewControllerIsProfileInstalled;

@optional
- (void)profileViewControllerDidSelectPoll:(DMCProfileViewController *)arg1;
- (_Bool)profileViewControllerShouldDisplayPoll:(DMCProfileViewController *)arg1;
- (void)profileViewControllerDidSelectUpdateProfile:(DMCProfileViewController *)arg1;
- (_Bool)profileViewControllerHideUpdateProfile:(DMCProfileViewController *)arg1;
@end

