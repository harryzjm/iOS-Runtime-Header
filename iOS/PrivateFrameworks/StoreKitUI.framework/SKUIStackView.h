//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, UIWindow;

@interface SKUIStackView : UIView
{
    UIImage *_image;
    NSMutableArray *_stackViews;
    long long _stackViewStyle;
    UIWindow *_window;
}

@property(readonly, nonatomic) long long stackViewStyle; // @synthesize stackViewStyle=_stackViewStyle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (long long)_stackDepth;
- (struct CGSize)_sizeOfItemAtIndex:(double)arg1;
- (struct UIOffset)_relativeOffsetOfItemAtIndex:(long long)arg1 withCenter:(struct CGPoint)arg2;
- (struct UIOffset)_relativeOffsetForMinimumRelativeOffset:(struct UIOffset)arg1 maximumRelativeOffset:(struct UIOffset)arg2 normalizedDistanceFromVanishingPoint:(struct CGSize)arg3;
- (struct CGSize)_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint)arg1 perspectiveTargetView:(id)arg2;
- (struct CGSize)_levelInsetSize;
- (struct CGPoint)_centerInPerspectiveTargetViewCoordinates;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithStackViewStyle:(long long)arg1;
- (id)_initSKUIStackView;

@end
