//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI25UpdateCoalescingTableView : UITableView
{
    MISSING_TYPE *isSidebarStyle;
    MISSING_TYPE *cachedIdealSize;
    MISSING_TYPE *rowSpacing;
    MISSING_TYPE *visibleCellsUpdate;
    MISSING_TYPE *ignoreGraphUpdates;
    MISSING_TYPE *pendingGraphUpdate;
    MISSING_TYPE *pendingScrollTarget;
    MISSING_TYPE *previousHorizontalMargin;
    MISSING_TYPE *_lastUpdateSeed;
    MISSING_TYPE *bridgedState;
    MISSING_TYPE *shouldDetermineInsetStyle;
    MISSING_TYPE *needsUpdateAlignmentInsets;
    MISSING_TYPE *lastConfigurationHash;
}

+ (_Bool)_isInternalTableView;
- (void).cxx_destruct;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (double)_rowSpacing;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutMarginsDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) struct CGRect bounds;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_setSectionContentInsetFollowsLayoutMargins:(_Bool)arg1;
- (_Bool)_sectionContentInsetFollowsLayoutMargins;

// Remaining properties
@property(nonatomic) _Bool sectionContentInsetFollowsLayoutMargins;

@end

