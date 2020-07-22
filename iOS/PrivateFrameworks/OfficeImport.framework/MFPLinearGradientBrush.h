//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPLinearGradientBrush
{
    struct CGRect mBounds;
    OITSUColor *mStartColor;
    OITSUColor *mEndColor;
}

- (void)createShading;
- (id)endColor;
- (id)startColor;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;

@end
