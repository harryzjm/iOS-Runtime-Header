//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface MDLLight
{
    struct RTLight *_light;
    NSString *_colorSpace;
    struct CGColorSpace *_cgColorSpace;
    unsigned long long _lightType;
}

@property(nonatomic) unsigned long long lightType; // @synthesize lightType=_lightType;
- (void).cxx_destruct;
- (MISSING_TYPE *)position;
- (void)setTransform:(id)arg1;
- (struct CGColor *)irradianceAtPoint:(struct CGColorSpace *)arg1 colorSpace: /* Error: Ran out of types for this method. */;
- (struct CGColor *)irradianceAtPoint: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) struct RTLight *rtLight;
- (void)dealloc;
- (id)init;
@property(copy, nonatomic) NSString *colorSpace;

@end
