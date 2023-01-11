//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PXCMMPosterBannerView, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, PXUpdater, PXViewLayoutHelper, UIActivityIndicatorView, UIColor;

@interface PXCMMPosterView : UIView
{
    struct _NSRange _bannerHeadlineBoldRange;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    PXCMMPosterBannerView *_bannerView;
    long long _actionButtonType;
    CDUnknownBlockType _actionButtonAction;
    UIActivityIndicatorView *_activityIndicatorView;
    PXViewLayoutHelper *_layoutHelper;
    PXUpdater *_updater;
    _Bool _needsBannerView;
    _Bool _actionInProgress;
    NSString *_bannerHeadline;
    NSString *_bannerSubheadline;
    UIColor *_opaqueAncestorBackgroundColor;
    unsigned long long _cornersToRound;
    double _cornerRadius;
    PXCMMPosterHeaderView *_headerView;
    long long _selectedCount;
    long long _totalCount;
}

@property(nonatomic, getter=isActionInProgress) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(readonly, nonatomic) PXCMMPosterBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) _Bool needsBannerView; // @synthesize needsBannerView=_needsBannerView;
@property(readonly, nonatomic) PXCMMPosterHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long cornersToRound; // @synthesize cornersToRound=_cornersToRound;
@property(copy, nonatomic) UIColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property(copy, nonatomic) NSString *bannerSubheadline; // @synthesize bannerSubheadline=_bannerSubheadline;
@property(copy, nonatomic) NSString *bannerHeadline; // @synthesize bannerHeadline=_bannerHeadline;
- (void).cxx_destruct;
- (id)_fontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
- (void)_updateCorners;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateBannerView;
- (void)_updateBannerActionButton;
- (void)_updateBannerTitles;
- (void)setActionButtonWithType:(long long)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)setBannerHeadline:(id)arg1 boldRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSString *statusString;
@property(copy, nonatomic) NSString *dateString;
@property(copy, nonatomic) NSString *locationString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

