//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface TPRingView : UIView
{
    CALayer *_luminanceRingLayer;
    CALayer *_dodgeRingLayer;
    CALayer *_highlightDodgeLayer;
    CALayer *_highlightLuminanceLayer;
    CALayer *_selectionLayer;
}

+ (id)createRingImageWithSize:(struct CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3;
+ (id)ringImageForDodge;
+ (id)ringImageForLuminance;
+ (id)colorForDodge;
+ (id)colorForLuminance;
+ (double)ringCornerRadius;
+ (double)ringStroke;
+ (struct CGSize)ringSize;
- (void).cxx_destruct;
@property(retain) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain) CALayer *highlightLuminanceLayer; // @synthesize highlightLuminanceLayer=_highlightLuminanceLayer;
@property(retain) CALayer *highlightDodgeLayer; // @synthesize highlightDodgeLayer=_highlightDodgeLayer;
@property(retain) CALayer *dodgeRingLayer; // @synthesize dodgeRingLayer=_dodgeRingLayer;
@property(retain) CALayer *luminanceRingLayer; // @synthesize luminanceRingLayer=_luminanceRingLayer;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end
