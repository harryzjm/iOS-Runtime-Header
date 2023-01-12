//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PUParallaxLayerStackDebugPaletteView, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface PUParallaxLayerStackDebugPaletteViewController : UIViewController
{
    UISegmentedControl *_switchControl;
    PUParallaxLayerStackDebugPaletteView *_colorBGPaletteView;
    PUParallaxLayerStackDebugPaletteView *_colorWashSinglePaletteView;
    PUParallaxLayerStackDebugPaletteView *_colorWashDuotonePaletteView;
    PUParallaxLayerStackDebugPaletteView *_customPaletteView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *customPaletteView; // @synthesize customPaletteView=_customPaletteView;
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashDuotonePaletteView; // @synthesize colorWashDuotonePaletteView=_colorWashDuotonePaletteView;
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashSinglePaletteView; // @synthesize colorWashSinglePaletteView=_colorWashSinglePaletteView;
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorBGPaletteView; // @synthesize colorBGPaletteView=_colorBGPaletteView;
@property(retain, nonatomic) UISegmentedControl *switchControl; // @synthesize switchControl=_switchControl;
- (void)modeChanged:(id)arg1;
- (void)viewDidLoad;
- (void)addSwitchableView:(id)arg1;
- (id)init;

@end

