//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPSize, UIColor;

__attribute__((visibility("hidden")))
@interface LPShadowStyle : NSObject
{
    double _radius;
    double _opacity;
    UIColor *_color;
    LPSize *_offset;
}

+ (id)collaborationPreviewShadow;
+ (id)cardHeadingIconShadow;
- (void).cxx_destruct;
@property(retain, nonatomic) LPSize *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)init;

@end

