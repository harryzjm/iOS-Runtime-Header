//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, PKMobileAssetManager, PKPaymentHeroImageController, PKPaymentPass, PKPaymentSetupHeroView, PKPaymentSetupInitialCardEducationIconsView, UIImageView, UILabel, UIView;

@interface PKEducationViewController <PKExplanationViewDelegate>
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
    AVPlayerLayer *_video;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    _Bool _playerStarted;
    _Bool _invalidated;
    CDUnknownBlockType _continueHandler;
}

+ (id)assetBackgroundColor;
+ (_Bool)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
- (void).cxx_destruct;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_performAddToWatchFlow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removePlayerItem;
- (void)didFinishPlaying;
- (void)invalidate;
- (void)performContinue;
- (void)startPlayingVideo;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

