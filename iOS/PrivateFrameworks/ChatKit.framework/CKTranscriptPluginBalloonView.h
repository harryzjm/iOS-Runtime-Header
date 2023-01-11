//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKTranscriptPluginViewDelegate-Protocol.h>

@class CKBalloonImageView, CKInteractiveBalloonImageView, IMBalloonPluginDataSource, NSString, UIView, UIViewController;
@protocol CKTranscriptPluginView;

@interface CKTranscriptPluginBalloonView <CKTranscriptPluginViewDelegate>
{
    _Bool _isInteractive;
    _Bool _mayReparentPluginViews;
    _Bool _suppressMask;
    long long _userInterfaceStyle;
    long long _userInterfaceLevel;
    UIViewController *_pluginViewController;
    UIView<CKTranscriptPluginView> *_pluginView;
    IMBalloonPluginDataSource *_dataSource;
    UIView *_pluginSnapshotViewForThrowAnimation;
    CKInteractiveBalloonImageView *_tailMask;
    CKBalloonImageView *_outlineMask;
    UIView *_pluginSnapshotView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suppressMask; // @synthesize suppressMask=_suppressMask;
@property(retain, nonatomic) UIView *pluginSnapshotView; // @synthesize pluginSnapshotView=_pluginSnapshotView;
@property(retain, nonatomic) CKBalloonImageView *outlineMask; // @synthesize outlineMask=_outlineMask;
@property(retain, nonatomic) CKInteractiveBalloonImageView *tailMask; // @synthesize tailMask=_tailMask;
@property(nonatomic) _Bool mayReparentPluginViews; // @synthesize mayReparentPluginViews=_mayReparentPluginViews;
@property(retain, nonatomic) UIView *pluginSnapshotViewForThrowAnimation; // @synthesize pluginSnapshotViewForThrowAnimation=_pluginSnapshotViewForThrowAnimation;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView<CKTranscriptPluginView> *pluginView; // @synthesize pluginView=_pluginView;
@property(nonatomic) __weak UIViewController *pluginViewController; // @synthesize pluginViewController=_pluginViewController;
- (long long)userInterfaceLevel;
- (long long)userInterfaceStyle;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
@property(readonly, nonatomic) _Bool shouldMaskWhenOpaque;
@property(readonly, nonatomic) struct CGRect maskFrame;
- (void)_pluginViewReadyForSnapshot:(id)arg1;
- (void)invisibleInkEffectViewWasUncovered;
- (id)imageForInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)attachInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (void)pluginViewRequestsPresentationAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)overlayColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (_Bool)canUseOpaqueMask;
- (void)prepareForReuse;
- (void)setUserInterfaceLevel:(long long)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)updateBalloonMasks;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
