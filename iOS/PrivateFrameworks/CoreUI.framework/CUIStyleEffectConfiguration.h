//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>
{
    long long _state;
    long long _presentationState;
    long long _value;
    unsigned long long _dimension1;
    _Bool _useSimplifiedEffect;
    _Bool _foregroundColorShouldTintEffects;
    double _brightnessMultiplier;
    double _effectScale;
    unsigned long long _colorTemperature;
}

@property(nonatomic) double effectScale; // @synthesize effectScale=_effectScale;
@property(nonatomic) unsigned long long colorTemperature; // @synthesize colorTemperature=_colorTemperature;
@property(nonatomic) double brightnessMultiplier; // @synthesize brightnessMultiplier=_brightnessMultiplier;
@property(nonatomic) _Bool foregroundColorShouldTintEffects; // @synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects;
@property(nonatomic) _Bool useSimplifiedEffect; // @synthesize useSimplifiedEffect=_useSimplifiedEffect;
@property(nonatomic) unsigned long long dimension1; // @synthesize dimension1=_dimension1;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (_Bool)shouldRespectOutputBlending;
- (_Bool)shouldIgnoreForegroundColor;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

