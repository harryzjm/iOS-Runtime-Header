//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8NewsFeed29DebugFormatSnapshotCanvasView : UIView
{
    MISSING_TYPE *toolbarItems;
    MISSING_TYPE *contentView;
    MISSING_TYPE *_selectedSnapshotView;
    MISSING_TYPE *$__lazy_storage_$_rotateGesture;
    MISSING_TYPE *$__lazy_storage_$_translateGesture;
    MISSING_TYPE *$__lazy_storage_$_zoomGesture;
    MISSING_TYPE *rotateState;
    MISSING_TYPE *translateState;
    MISSING_TYPE *zoomState;
    MISSING_TYPE *hiddenSlider;
    MISSING_TYPE *depthSlider;
    MISSING_TYPE *snapshots;
    MISSING_TYPE *snapshotTransform;
}

- (void).cxx_destruct;
- (void)doHiddenChangedWithSender:(id)arg1;
- (void)doDepthChangedWithSender:(id)arg1;
- (void)doPerspectiveWithSender:(id)arg1;
- (void)doZoomWithGesture:(id)arg1;
- (void)doTranslateWithGesture:(id)arg1;
- (void)doRotateWithGesture:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

