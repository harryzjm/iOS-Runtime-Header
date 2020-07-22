//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIKBRenderEffect-Protocol.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBShadowEffect : NSObject <UIKBRenderEffect>
{
    NSString *_colorName;
    double _weight;
    struct CGSize _offset;
    struct UIEdgeInsets _insets;
    struct UIEdgeInsets _concaveInsets;
}

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) struct UIEdgeInsets concaveInsets; // @synthesize concaveInsets=_concaveInsets;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGColor *)CGColor;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
@property(readonly, nonatomic) SEL renderSelector;
@property(readonly, nonatomic) _Bool renderUnder;
@property(readonly, nonatomic) UIKBGradient *gradient;
@property(readonly, nonatomic) _Bool usesRGBColors;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
