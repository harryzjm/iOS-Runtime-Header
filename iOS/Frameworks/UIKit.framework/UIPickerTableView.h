//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableIndexSet, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIPickerTableView <UITableViewDelegate>
{
    struct CGRect _selectionBarRect;
    long long _selectionBarRow;
    NSMutableIndexSet *_checkedRows;
    double _lastClickedOffset;
    long long _lastSelectedRow;
    _Bool _usesModernStyle;
    UIColor *_textColor;
    struct CGRect _visibleRect;
    NSMutableArray *_referencingCells;
    struct {
        unsigned int allowsMultipleSelection:1;
        unsigned int scrollingDirection:2;
        unsigned int didSelectDisabled:1;
        unsigned int skipRowChangeNotifications:1;
        unsigned int scrollingForSelection:1;
        unsigned int pickerViewImplementsSelectionBarChanged:2;
        unsigned int cancellingAnimation:1;
        unsigned int updatingContentInset:1;
    } _pickerTableFlags;
    _Bool _playsFeedback;
}

@property(getter=_playsFeedback, setter=_setPlaysFeedback:) _Bool playsFeedback; // @synthesize playsFeedback=_playsFeedback;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) struct CGRect selectionBarRect; // @synthesize selectionBarRect=_selectionBarRect;
- (void).cxx_destruct;
- (_Bool)_shouldWrapCells;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property(getter=_usesModernStyle, setter=_setUsesModernStyle:) _Bool _usesModernStyle;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_scrollingFinished;
- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)_beginTrackingWithEvent:(id)arg1;
- (_Bool)isRowChecked:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow; // @synthesize selectionBarRow=_selectionBarRow;
- (void)_playClickIfNecessary;
- (id)_containerView;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;
- (id)_anyDateLabel;
- (void)layoutSubviews;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 notify:(_Bool)arg2;
- (void)_notifyContentOffsetChange;
- (struct CATransform3D)_transformForCellAtY:(double)arg1;
- (double)_rotationForCellCenterY:(double)arg1;
- (double)_yForY:(double)arg1;
- (double)_distanceToCenterForY:(double)arg1;
- (double)_zForUnitY:(double)arg1;
- (double)_viewYForUnitY:(double)arg1;
- (double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2;
- (double)_unitYForViewY:(double)arg1;
- (double)_zCoordinateForYCoordinate:(double)arg1;
- (long long)_contentInsetAdjustmentBehavior;
- (void)_updateContentInsets;
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (_Bool)didSelectDisabled:(_Bool)arg1;
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;
- (id)_checkedRows;
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)_pickerView;
- (struct CGRect)_visibleBounds;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 visibleRect:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

