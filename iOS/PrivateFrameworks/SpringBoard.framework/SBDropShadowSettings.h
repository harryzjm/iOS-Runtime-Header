//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBDropShadowSettings : PTSettings
{
    double _radius;
    double _opacity;
    double _offsetX;
    double _offsetY;
    double _continuousCornerRadius;
}

+ (id)moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)setDefaultValues;

@end
