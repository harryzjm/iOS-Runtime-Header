//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/UITextViewDelegate-Protocol.h>

@class NSString, PXMomentShareStatusPresentation, UIAlertController, UILabel, UIProgressView, UITextView, UIVisualEffectView;
@protocol PXCMMProgressBannerViewDelegate;

@interface PXCMMProgressBannerView : UIView <PXChangeObserver, UITextViewDelegate>
{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    UIVisualEffectView *_visualEffectView;
    UITextView *_activityTextView;
    UILabel *_pauseLabel;
    UIProgressView *_progressView;
    double _layoutHeight;
    id <PXCMMProgressBannerViewDelegate> _delegate;
    UIAlertController *_alertController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(nonatomic) __weak id <PXCMMProgressBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateProgress;
- (void)_updatePauseTitle;
- (void)_updateActivityTitle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
