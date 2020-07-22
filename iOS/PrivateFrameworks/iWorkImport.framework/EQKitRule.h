//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EQKitRule
{
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGColor *mCGColor;
}

@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=mCGColor;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
@property(readonly, nonatomic) double depth; // @synthesize depth=mDepth;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
- (id)description;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithHeight:(double)arg1 depth:(double)arg2 width:(double)arg3 cgColor:(struct CGColor *)arg4;

@end

