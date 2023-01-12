//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString, SBHLibraryIconViewController, SBHModalLibraryPresenter, SBIconView, UIView, UIViewController;
@protocol BSInvalidatable;

@protocol SBHModalLibraryPresenterContextProviding <NSObject>
- (SBHLibraryIconViewController *)libraryIconViewControllerForPresenter:(SBHModalLibraryPresenter *)arg1;
- (SBIconView *)libraryIconViewForPresenter:(SBHModalLibraryPresenter *)arg1;
- (id <BSInvalidatable>)acquireOrderSourceContainerViewBeforeLibraryViewAssertionForReason:(NSString *)arg1;
- (UIView *)sourceContainerViewForPresenter:(SBHModalLibraryPresenter *)arg1;
- (UIViewController *)containerViewControllerForPresentingInForeground:(SBHModalLibraryPresenter *)arg1;
- (_Bool)isDefaultContainerForegroundForPresenter:(SBHModalLibraryPresenter *)arg1;
@end

