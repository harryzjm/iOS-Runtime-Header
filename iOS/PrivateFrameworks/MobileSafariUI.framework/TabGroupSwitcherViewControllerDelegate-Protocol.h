//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class TabGroupSwitcherViewController;

@protocol TabGroupSwitcherViewControllerDelegate <NSObject>

@optional
- (void)closeAllTabsForTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
- (void)dismissTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
- (void)presentTabGroupSheetForTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
- (void)openNewTabForTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
@end

