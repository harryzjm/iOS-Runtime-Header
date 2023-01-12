//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBEdgeEffect : NSObject
{
    NSString *_colorName;
    unsigned long long _edges;
    double _weight;
    UIKBGradient *_gradient;
    double _opacity;
    struct UIEdgeInsets _insets;
}

+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 inset:(double)arg3 weight:(double)arg4;
- (void).cxx_destruct;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIKBGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGColor *)CGColor;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
- (void)renderEffectWithRenderer:(id)arg1 traits:(id)arg2;
@property(readonly, nonatomic) _Bool renderUnder;
@property(readonly, nonatomic) _Bool usesRGBColors;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

