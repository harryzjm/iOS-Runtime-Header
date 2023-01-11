//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;

@interface CKExclamationAcknowledgmentGlyphView
{
    UIImageView *_leftExclamationGlyph;
    UIImageView *_rightExclamationGlyph;
}

@property(retain, nonatomic) UIImageView *rightExclamationGlyph; // @synthesize rightExclamationGlyph=_rightExclamationGlyph;
@property(retain, nonatomic) UIImageView *leftExclamationGlyph; // @synthesize leftExclamationGlyph=_leftExclamationGlyph;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)glyphOffset;
- (long long)acknowledgmentType;
- (void)setGlyphColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end

