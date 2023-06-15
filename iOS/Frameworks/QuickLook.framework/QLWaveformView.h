//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVAsset, NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface QLWaveformView : UIView
{
    struct CGSize _waveSize;
    UIView *_lineView;
    UIImage *_waveImage;
    UIImageView *_waveView;
    AVAsset *_asset;
    UIImage *placeholderImage;
    struct CGRect visibleRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage;
@property(copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void)layoutSubviews;
- (void)_updateWithWaveformImage:(id)arg1;
- (void)_expandWaveform;
- (void)updateImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

