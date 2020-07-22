//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

@interface EQKitStringBox
{
    NSAttributedString *mAttributedString;
    struct __CTLine *mLine;
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGRect mErasableBounds;
    _Bool mDimensionsValid;
    struct CGColor *mCGColor;
}

@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=mCGColor;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=mAttributedString;
- (void)p_cacheDimensions;
- (id)description;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (double)positionOfCharacterAtIndex:(unsigned long long)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct __CTLine *line;
- (struct CGRect)erasableBounds;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAttributedString:(id)arg1 cgColor:(struct CGColor *)arg2;

@end

