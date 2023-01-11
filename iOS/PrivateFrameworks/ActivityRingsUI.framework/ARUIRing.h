//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@class MISSING_TYPE, UIColor;

@interface ARUIRing : NSObject <NSCopying>
{
    float _diameter;
    float _thickness;
    float _percentage;
    float _opacity;
    float _emptyOpacity;
    float _trackOpacity;
    float _scale;
    float _zRotation;
    UIColor *_topColor;
    UIColor *_bottomColor;
    MISSING_TYPE *_translation;
    MISSING_TYPE *_topColorVector;
    MISSING_TYPE *_topColorPremultipliedVector;
    MISSING_TYPE *_bottomColorVector;
    MISSING_TYPE *_bottomColorPremultipliedVector;
}

+ (id)randomRing;
- (void).cxx_destruct;
@property(readonly, nonatomic) MISSING_TYPE *bottomColorPremultipliedVector; // @synthesize bottomColorPremultipliedVector=_bottomColorPremultipliedVector;
@property(readonly, nonatomic) MISSING_TYPE *bottomColorVector; // @synthesize bottomColorVector=_bottomColorVector;
@property(readonly, nonatomic) MISSING_TYPE *topColorPremultipliedVector; // @synthesize topColorPremultipliedVector=_topColorPremultipliedVector;
@property(readonly, nonatomic) MISSING_TYPE *topColorVector; // @synthesize topColorVector=_topColorVector;
@property(nonatomic) MISSING_TYPE *translation; // @synthesize translation=_translation;
@property(nonatomic) float zRotation; // @synthesize zRotation=_zRotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float trackOpacity; // @synthesize trackOpacity=_trackOpacity;
@property(nonatomic) float emptyOpacity; // @synthesize emptyOpacity=_emptyOpacity;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) float percentage; // @synthesize percentage=_percentage;
@property(nonatomic) float thickness; // @synthesize thickness=_thickness;
@property(nonatomic) float diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) UIColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_updatePremultipliedBottomColor;
- (void)_updatePremultipliedTopColor;
- (id)initWithRing:(id)arg1;
- (id)init;

@end
