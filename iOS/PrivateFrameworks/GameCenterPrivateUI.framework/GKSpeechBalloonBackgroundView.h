//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class _GKCustomDrawnSpeechBalloonBackgroundView, _GKImageSpeechBalloonBackgroundView;

@interface GKSpeechBalloonBackgroundView : UIView
{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
    _GKCustomDrawnSpeechBalloonBackgroundView *_customDrawnView;
    _GKImageSpeechBalloonBackgroundView *_strokedImageView;
}

@property(retain, nonatomic) _GKImageSpeechBalloonBackgroundView *strokedImageView; // @synthesize strokedImageView=_strokedImageView;
@property(retain, nonatomic) _GKCustomDrawnSpeechBalloonBackgroundView *customDrawnView; // @synthesize customDrawnView=_customDrawnView;
@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
@property(nonatomic) unsigned char drawStyle; // @synthesize drawStyle=_drawStyle;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
