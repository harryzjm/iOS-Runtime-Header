//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/TabOverviewItemView-Protocol.h>

@class NSString, TabSnapshotImageView, UIButton, UIImage, UIView;

@interface TabOverviewItemView <TabOverviewItemView>
{
    _Bool _hasBorrowedContentView;
    TabSnapshotImageView *_snapshotView;
    UIView *_dimmingView;
    double _cornerRadius;
    double _topBackdropHeight;
    long long _tabLayout;
    double _transitionProgress;
    UIView *_attachedView;
    struct CGSize _windowSize;
    struct CGRect _attachedViewReferenceRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect attachedViewReferenceRect; // @synthesize attachedViewReferenceRect=_attachedViewReferenceRect;
@property(retain, nonatomic) UIView *attachedView; // @synthesize attachedView=_attachedView;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) long long tabLayout; // @synthesize tabLayout=_tabLayout;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) TabSnapshotImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (id)focusEffect;
- (_Bool)canBecomeFocused;
@property(readonly, nonatomic) UIView *previewView;
- (_Bool)headerHasFinishedAnimating;
- (struct CGRect)headerViewFrame;
- (struct UIEdgeInsets)headerViewInsets;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)containsBorrowedContentView:(id)arg1;
- (void)removeBorrowedContentView:(id)arg1;
- (void)insertBorrowedContentView:(id)arg1 headerHeight:(double)arg2;
@property(nonatomic) double shadowOpacity;
- (void)updateSnapshotWithImage:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
- (void)takeOwnershipOfAttachedView;

// Remaining properties
@property(readonly, nonatomic, getter=isAccessibilityContentSize) _Bool accessibilityContentSize;
@property(retain, nonatomic) TabSnapshotImageView *blankSnapshotView;
@property(readonly, nonatomic) UIButton *closeButton;
@property(nonatomic) double closeButtonLeftInset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long effectiveHeaderMode;
@property(nonatomic) double extraTitleScale;
@property(readonly) unsigned long long hash;
@property(nonatomic) double headerBackgroundViewAlpha;
@property(nonatomic) double headerCornerRadius;
@property(nonatomic) _Bool hidesTabTitle;
@property(retain, nonatomic) UIImage *icon;
@property(nonatomic) unsigned long long mediaStateIcon;
@property(nonatomic) long long preferredHeaderMode;
@property(nonatomic, getter=isRecording) _Bool recording;
@property(nonatomic) _Bool showsCloseButton;
@property(readonly) Class superclass;
@property(nonatomic) long long tintStyle;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) double titleAlpha;
@property(nonatomic) double titleHeight;
@property(nonatomic) double titleOffset;
@property(nonatomic) double titleScale;
@property(readonly, nonatomic) _Bool usesDarkTheme;
@property(nonatomic) double verticalTextAlignmentAdjustment;

@end
