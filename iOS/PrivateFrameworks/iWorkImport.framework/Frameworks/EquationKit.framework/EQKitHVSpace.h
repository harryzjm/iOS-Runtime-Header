//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EQKitHVSpace
{
    double mWidth;
    double mHeight;
    double mDepth;
}

@property(readonly, nonatomic) double depth; // @synthesize depth=mDepth;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
@property(readonly, nonatomic) double layoutDepth;
@property(readonly, nonatomic) double layoutHeight;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 depth:(double)arg3;
- (id)init;

@end
