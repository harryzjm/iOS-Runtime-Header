//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUMutableBrushStroke
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (void)appendPoint:(CDStruct_869f9c67)arg1;
- (id)points;
- (id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 pressureMode:(long long)arg4;

// Remaining properties
@property(nonatomic) float opacity; // @dynamic opacity;
@property(nonatomic) long long pressureMode; // @dynamic pressureMode;
@property(nonatomic) float radius; // @dynamic radius;
@property(nonatomic) float softness; // @dynamic softness;

@end

