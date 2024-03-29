//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIImageView, VUISBIconProgressView;

__attribute__((visibility("hidden")))
@interface VUIAppInstallView : UIView
{
    UIImageView *_appIconImageView;
    UIView *_backgroundKnockoutView;
    double _imageBorderWidth;
    CDUnknownBlockType _completion;
    VUISBIconProgressView *_progressView;
    UIImage *_appIcon;
    double _installProgress;
}

+ (struct CGSize)_appIconSize;
+ (double)_appIconRadius;
+ (id)_progressMaskImage;
- (void).cxx_destruct;
@property(nonatomic) double installProgress; // @synthesize installProgress=_installProgress;
@property(retain, nonatomic) UIImage *appIcon; // @synthesize appIcon=_appIcon;
- (void)_makeImageBorderVisible:(_Bool)arg1;
- (void)setWaiting;
- (void)finishInstallationWithCompletion:(CDUnknownBlockType)arg1;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

