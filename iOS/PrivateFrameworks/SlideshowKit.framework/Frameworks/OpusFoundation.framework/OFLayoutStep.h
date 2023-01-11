//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OFViewProxy;

@interface OFLayoutStep : NSObject
{
    OFViewProxy *_targetView;
    unsigned long long _targetAttribute;
    double _targetSizeMultiplier;
    long long _relation;
    OFViewProxy *_anchorView;
    unsigned long long _anchorAttribute;
    double _anchorSizeMultiplier;
    double _multiplier;
    double _constant;
}

+ (_Bool)_parseCGPoint:(struct CGPoint *)arg1 withScanner:(id)arg2;
+ (unsigned long long)layoutAttributeFromScanner:(id)arg1;
+ (id)_stepsFrom2DString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3;
+ (id)_stepFrom1DString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3;
+ (id)stepsFromString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3;
+ (id)stepForTarget:(id)arg1 attribute:(unsigned long long)arg2 sizeMultiplier:(double)arg3 relatedBy:(long long)arg4 toAnchorView:(id)arg5 attribute:(unsigned long long)arg6 sizeMultiplier:(double)arg7 multiplier:(double)arg8 constant:(double)arg9;
@property(readonly) double constant; // @synthesize constant=_constant;
@property(readonly) double multiplier; // @synthesize multiplier=_multiplier;
@property(readonly) double anchorSizeMultiplier; // @synthesize anchorSizeMultiplier=_anchorSizeMultiplier;
@property(readonly) unsigned long long anchorAttribute; // @synthesize anchorAttribute=_anchorAttribute;
@property(readonly) OFViewProxy *anchorView; // @synthesize anchorView=_anchorView;
@property(readonly) long long relation; // @synthesize relation=_relation;
@property(readonly) double targetSizeMultiplier; // @synthesize targetSizeMultiplier=_targetSizeMultiplier;
@property(readonly) unsigned long long targetAttribute; // @synthesize targetAttribute=_targetAttribute;
@property(readonly) OFViewProxy *targetView; // @synthesize targetView=_targetView;
- (void)run;
- (id)init;

@end

