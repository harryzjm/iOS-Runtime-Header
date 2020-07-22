//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ETPaletteCircleView, NSArray, UIColor, UILongPressGestureRecognizer;
@protocol DTSColorPickerDelegate;

@interface DTSColorPicker : UIView
{
    NSArray *_paletteCircles;
    ETPaletteCircleView *_selectedCircle;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _Bool _dimmed;
    id <DTSColorPickerDelegate> _delegate;
    unsigned long long _colorCircleSize;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) ETPaletteCircleView *selectedCircle; // @synthesize selectedCircle=_selectedCircle;
@property(retain, nonatomic) NSArray *paletteCircles; // @synthesize paletteCircles=_paletteCircles;
@property(nonatomic) unsigned long long colorCircleSize; // @synthesize colorCircleSize=_colorCircleSize;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) __weak id <DTSColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showColorWheel;
- (void)didReceiveLongPress:(id)arg1;
- (void)paletteCircleTapped:(id)arg1;
- (void)selectCircle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createPaletteCirclesWithParentView:(id)arg1;
@property(readonly, nonatomic) double colorCircleDiameter;
@property(readonly, nonatomic) double colorCircleHorizontalSpacing;
@property(readonly, nonatomic) UIColor *selectedColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

