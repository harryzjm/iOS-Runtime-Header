//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIColor, UIImage, UIImageSymbolConfiguration, UIImageView, UIView, UIViewController, VUICircularProgress, VUIDownloadButtonActionHandler, VUIDownloadButtonViewModel, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDownloadButton
{
    _Bool _showsTextInDownloadedState;
    _Bool _usesDefaultConfiguration;
    _Bool _observingDownloadProgress;
    _Bool _wasDeleted;
    _Bool _wasCanceled;
    _Bool _isForLibrary;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _downloadStateChangeHandler;
    UIImage *_notDownloadedImage;
    UIImage *_connectingImage;
    UIImage *_downloadingImage;
    UIImage *_downloadedImage;
    UIImage *_expiredDownloadImage;
    VUIDownloadButtonViewModel *_viewModel;
    VUICircularProgress *_progressIndicator;
    VUITextLayout *_textLayout;
    UIImageSymbolConfiguration *_primarySymbolConfiguration;
    VUIDownloadButtonActionHandler *_actionHandler;
    UIView *_backgroundView;
    UIColor *_keyBackgroundColor;
    UIColor *_saturatedTintColor;
    CAShapeLayer *_backgroundMaskingLayer;
    CAShapeLayer *_backdropMaskingLayer;
    UIImageSymbolConfiguration *_badgeSymbolConfiguration;
    UIImageView *_badgeImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIImageSymbolConfiguration *badgeSymbolConfiguration; // @synthesize badgeSymbolConfiguration=_badgeSymbolConfiguration;
@property(retain, nonatomic) CAShapeLayer *backdropMaskingLayer; // @synthesize backdropMaskingLayer=_backdropMaskingLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundMaskingLayer; // @synthesize backgroundMaskingLayer=_backgroundMaskingLayer;
@property(retain, nonatomic) UIColor *saturatedTintColor; // @synthesize saturatedTintColor=_saturatedTintColor;
@property(retain, nonatomic) UIColor *keyBackgroundColor; // @synthesize keyBackgroundColor=_keyBackgroundColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) VUIDownloadButtonActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) UIImageSymbolConfiguration *primarySymbolConfiguration; // @synthesize primarySymbolConfiguration=_primarySymbolConfiguration;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) _Bool isForLibrary; // @synthesize isForLibrary=_isForLibrary;
@property(nonatomic) _Bool wasCanceled; // @synthesize wasCanceled=_wasCanceled;
@property(nonatomic) _Bool wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(nonatomic) _Bool observingDownloadProgress; // @synthesize observingDownloadProgress=_observingDownloadProgress;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) VUIDownloadButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImage *expiredDownloadImage; // @synthesize expiredDownloadImage=_expiredDownloadImage;
@property(retain, nonatomic) UIImage *downloadedImage; // @synthesize downloadedImage=_downloadedImage;
@property(retain, nonatomic) UIImage *downloadingImage; // @synthesize downloadingImage=_downloadingImage;
@property(retain, nonatomic) UIImage *connectingImage; // @synthesize connectingImage=_connectingImage;
@property(retain, nonatomic) UIImage *notDownloadedImage; // @synthesize notDownloadedImage=_notDownloadedImage;
@property(copy, nonatomic) CDUnknownBlockType downloadStateChangeHandler; // @synthesize downloadStateChangeHandler=_downloadStateChangeHandler;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool usesDefaultConfiguration; // @synthesize usesDefaultConfiguration=_usesDefaultConfiguration;
@property(nonatomic) _Bool showsTextInDownloadedState; // @synthesize showsTextInDownloadedState=_showsTextInDownloadedState;
- (void)_stopObservingDownloadProgress:(id)arg1;
- (void)_startObservingDownloadProgress:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_configureProgressIndicatorWithProperties:(id)arg1;
- (void)_insertProgressIndicatorWithFrame:(struct CGRect)arg1;
- (id)_buttonPropertiesForState:(unsigned long long)arg1 downloadExpirationDate:(id)arg2 hasFailed:(_Bool)arg3;
- (void)_updateDownloadProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_updateImageViewTintColorWithDownloadState:(unsigned long long)arg1;
- (void)_updateButtonToDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToDownloadingWithProperties:(id)arg1;
- (void)_updateButtonToConnectingWithProperties:(id)arg1;
- (void)_updateButtonToNotDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToState:(unsigned long long)arg1 downloadExpirationDate:(id)arg2 hasFailed:(_Bool)arg3;
- (void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2;
- (id)_badgeImageForDownloadState:(unsigned long long)arg1 downloadExpirationDate:(id)arg2 hasFailed:(_Bool)arg3;
- (id)_imageForDownloadState:(unsigned long long)arg1 downloadExpirationDate:(id)arg2 hasFailed:(_Bool)arg3;
- (id)_expiredBadgeImage;
- (id)_expiredDownloadImage;
- (id)_pausedImage;
- (id)_downloadedBadgeImage;
- (id)_downloadedImage;
- (id)_downloadingImage;
- (id)_connectingImage;
- (id)_notDownloadedImage;
- (void)_setBadgeImage:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setTitleWithProperties:(id)arg1;
- (void)_layoutProgressIndicator;
- (void)_clearMasks;
- (void)_updateMaskForProgressLayer;
- (void)_updateLayoutForBadge;
- (void)_setupDownloadButton;
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;
- (void)setScrolledNonUberPercentage:(double)arg1;
- (void)updateWithPlayable:(id)arg1 textLayout:(id)arg2;
- (void)updateWithAssetController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)vui_didMoveToWindow;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (void)revertTintColor;
- (void)saturateTintColorAndBackgroundColor;
- (void)setTintColor:(id)arg1;
- (void)configureWithLayoutProperties;
- (void)configureActionHandler;
- (void)dealloc;
- (id)initWithMediaEntity:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithAssetController:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithDownloadButtonViewModel:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithPlayable:(id)arg1 type:(unsigned long long)arg2 textLayout:(id)arg3;

@end

