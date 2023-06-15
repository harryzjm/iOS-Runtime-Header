//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class NSArray, NSURL, SBHRecentsDocumentExtensionProvider, SBIconView, SBSApplicationShortcutItem, UIView, _UIContextMenuStyle;

@protocol SBIconViewShortcutsDelegate <NSObject>

@optional
- (_Bool)iconViewShouldIncludeUninstallShortcutItem:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 willUseContextMenuStyle:(_UIContextMenuStyle *)arg2;
- (UIView *)containerViewForPresentingContextMenuForIconView:(SBIconView *)arg1;
- (unsigned long long)supportedMultitaskingShortcutActionsForIconView:(SBIconView *)arg1;
- (SBHRecentsDocumentExtensionProvider *)recentDocumentExtensionProviderForIconView:(SBIconView *)arg1;
- (_Bool)iconView:(SBIconView *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3;
- (NSURL *)applicationBundleURLForShortcutsWithIconView:(SBIconView *)arg1;
- (NSArray *)iconView:(SBIconView *)arg1 applicationShortcutItemsWithProposedItems:(NSArray *)arg2;
- (void)iconViewShortcutsPresentationDidCancel:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationDidFinish:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationWillFinish:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationWillBegin:(SBIconView *)arg1;
- (_Bool)iconViewShouldBeginShortcutsPresentation:(SBIconView *)arg1;
@end

