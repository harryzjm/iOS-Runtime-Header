//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <ControlCenterUIKit/CCUIContentModuleTopLevelGestureProvider-Protocol.h>
#import <ControlCenterUIKit/CCUIGroupRendering-Protocol.h>
#import <ControlCenterUIKit/CCUITouchContinuationProviding-Protocol.h>

@class CALayer, CCUICAPackageDescription, CCUICAPackageView, MTVisualStylingProvider, NSArray, NSString, UIImage, UIImageView;

@interface CCUIBaseSliderView : UIControl <CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleTopLevelGestureProvider>
{
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    CCUICAPackageView *_compensatingGlyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _didConfigureGlyphPackageView;
    _Bool _glyphVisible;
    _Bool _interactiveWhenUnexpanded;
    float _value;
    UIImage *_glyphImage;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    double _glyphScale;
}

@property(nonatomic) double glyphScale; // @synthesize glyphScale=_glyphScale;
@property(nonatomic, getter=isInteractiveWhenUnexpanded) _Bool interactiveWhenUnexpanded; // @synthesize interactiveWhenUnexpanded=_interactiveWhenUnexpanded;
@property(nonatomic, getter=isGlyphVisible) _Bool glyphVisible; // @synthesize glyphVisible=_glyphVisible;
@property(retain, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint glyphCenter;
- (void)_configureCompensatingGlyphPackageView:(id)arg1;
- (void)_configureGlyphPackageView:(id)arg1;
- (id)_newGlyphPackageView;
- (void)_updateGlyphImageViewVisualStyling;
- (id)viewForTouchContinuation;
@property(readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;
@property(readonly, nonatomic) CALayer *punchOutRootLayer;
@property(readonly, nonatomic) NSArray *punchOutRootLayers;
@property(readonly, nonatomic, getter=isGroupRenderingRequired) _Bool groupRenderingRequired;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (double)sliderLengthForValue:(float)arg1;
- (double)sliderHeightForValue:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
