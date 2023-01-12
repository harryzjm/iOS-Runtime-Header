//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, MRUVisualStylingProvider, MRUWaveformData, MRUWaveformSettings, NSArray, NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MRUWaveformView : UIView
{
    _Bool _dimmed;
    MRUWaveformData *_waveformData;
    UIImage *_artworkImage;
    NSString *_remoteRouteSymbol;
    unsigned long long _context;
    MRUVisualStylingProvider *_stylingProvider;
    CALayer *_artworkLightenLayer;
    CALayer *_artworkLayer;
    CAGradientLayer *_gradientLayer;
    UIView *_barsView;
    UIImageView *_routeImageView;
    NSArray *_bars;
    MRUWaveformSettings *_settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUWaveformSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSArray *bars; // @synthesize bars=_bars;
@property(retain, nonatomic) UIImageView *routeImageView; // @synthesize routeImageView=_routeImageView;
@property(retain, nonatomic) UIView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *artworkLayer; // @synthesize artworkLayer=_artworkLayer;
@property(retain, nonatomic) CALayer *artworkLightenLayer; // @synthesize artworkLightenLayer=_artworkLightenLayer;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) NSString *remoteRouteSymbol; // @synthesize remoteRouteSymbol=_remoteRouteSymbol;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(retain, nonatomic) MRUWaveformData *waveformData; // @synthesize waveformData=_waveformData;
- (void)updateVisualStyle;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)applyContext:(unsigned long long)arg1;
- (void)updateLayers;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 context:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

