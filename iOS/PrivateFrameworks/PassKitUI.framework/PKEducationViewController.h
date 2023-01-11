//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKFieldDetectSuppressor-Protocol.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, PKMobileAssetManager, PKPaymentHeroImageController, PKPaymentPass, PKPaymentSetupHeroView, PKPaymentSetupInitialCardEducationIconsView, UIImageView, UILabel, UIView;

@interface PKEducationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor>
{
    UIImageView *_heroPhone;
    UIView *_heroPhoneBackground;
    UIImageView *_passSnapshot;
    UILabel *_instructionLabel;
    PKPaymentHeroImageController *_heroImageController;
    PKPaymentSetupHeroView *_heroView;
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    PKMobileAssetManager *_mobileAssetManager;
    PKPaymentPass *_paymentPass;
    unsigned long long _educationContext;
    _Bool _isFaceIDDevice;
    _Bool _isPad;
    double _maxHeight;
    AVPlayerLayer *_video;
    UIView *_videoBoundingView;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    _Bool _playerStarted;
    _Bool _invalidated;
    _Bool _offerAddToWatch;
    CDUnknownBlockType _continueHandler;
    NSString *_titleOverride;
    NSString *_bodyAddition;
}

+ (id)assetBackgroundColorPad;
+ (id)assetBackgroundColor;
+ (_Bool)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bodyAddition; // @synthesize bodyAddition=_bodyAddition;
@property(copy, nonatomic) NSString *titleOverride; // @synthesize titleOverride=_titleOverride;
@property(nonatomic) _Bool offerAddToWatch; // @synthesize offerAddToWatch=_offerAddToWatch;
@property(copy, nonatomic) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_performAddToWatchFlow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removePlayerItem;
- (void)didFinishPlaying;
- (void)invalidate;
- (void)performContinue;
- (void)startPlayingVideo;
- (void)explanationViewDidSelectContinue:(id)arg1;
@property(readonly, nonatomic) _Bool suppressFieldDetect;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3;
- (id)init;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
