//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, UIColor, UIImage, UIImageView, UIView, _MKBalloonCalloutView;

@interface _MKBalloonAnnotationView
{
    UIColor *_balloonTintColor;
    UIColor *_balloonStrokeColor;
    CALayer *_baseLayer;
    UIImageView *_smallImageView;
    UIImage *_largeImage;
    long long _style;
    _MKBalloonCalloutView *_calloutView;
}

@property(copy, nonatomic) UIImage *largeImage; // @synthesize largeImage=_largeImage;
@property(copy, nonatomic) UIColor *balloonStrokeColor; // @synthesize balloonStrokeColor=_balloonStrokeColor;
@property(copy, nonatomic) UIColor *balloonTintColor; // @synthesize balloonTintColor=_balloonTintColor;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateBaseImage;
- (id)_baseTransitionAnimation:(_Bool)arg1;
- (void)didMoveToWindow;
@property(retain, nonatomic) UIView *contentView;
@property(copy, nonatomic) UIImage *smallImage;
- (struct CGSize)intrinsicContentSize;
- (id)initWithAnnotation:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

