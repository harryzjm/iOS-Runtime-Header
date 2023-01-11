//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFMediaPlayerView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SFShareAudioHoldButtonViewController
{
    unsigned int _colorCode;
    unsigned int _productID;
    UIImageView *_productImageView;
    SFMediaPlayerView *_productMovieView;
    UIImageView *_shareImageView;
    UILabel *_infoLabel;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(nonatomic) unsigned int colorCode; // @synthesize colorCode=_colorCode;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
@property(retain, nonatomic) SFMediaPlayerView *productMovieView; // @synthesize productMovieView=_productMovieView;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void)_updateDeviceVisual:(id)arg1;
- (void)eventCancel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end
