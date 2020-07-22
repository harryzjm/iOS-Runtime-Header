//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAFilter, NSString, UIColor, UIVibrancyEffect;

@interface MTVibrantStyling : NSObject
{
    CAFilter *_composedFilter;
    UIColor *_color;
    double _alpha;
    NSString *_blendMode;
}

+ (id)vibrantStylingWithPrivateStyle:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) CAFilter *composedFilter; // @synthesize composedFilter=_composedFilter;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIVibrancyEffect *visualEffect;
- (id)_layerConfig;
@property(readonly, nonatomic) long long style;

@end

