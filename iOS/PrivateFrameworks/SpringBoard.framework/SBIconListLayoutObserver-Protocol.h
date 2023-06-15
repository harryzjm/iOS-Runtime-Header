//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBIconListView, SBIconView;

@protocol SBIconListLayoutObserver <NSObject>

@optional
- (void)iconListViewDidChangeNumberOfPlaceholdersOrLayoutHiddenIcons:(SBIconListView *)arg1;
- (void)iconListViewDidChangeBoundsSize:(SBIconListView *)arg1;
- (void)iconListView:(SBIconListView *)arg1 didRemoveIconView:(SBIconView *)arg2;
- (void)iconListView:(SBIconListView *)arg1 didAddIconView:(SBIconView *)arg2;
@end

