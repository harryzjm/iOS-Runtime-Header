//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBFParallaxSettings;

@interface SBHIconSettings : PTSettings
{
    _Bool _suppressJitter;
    _Bool _alwaysHitTestNearestIcon;
    double _iconHitboxPaddingX;
    double _iconHitboxPaddingY;
    SBFParallaxSettings *_iconParallaxSettings;
    SBFParallaxSettings *_badgeParallaxSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) SBFParallaxSettings *badgeParallaxSettings; // @synthesize badgeParallaxSettings=_badgeParallaxSettings;
@property(retain, nonatomic) SBFParallaxSettings *iconParallaxSettings; // @synthesize iconParallaxSettings=_iconParallaxSettings;
@property(nonatomic) double iconHitboxPaddingY; // @synthesize iconHitboxPaddingY=_iconHitboxPaddingY;
@property(nonatomic) double iconHitboxPaddingX; // @synthesize iconHitboxPaddingX=_iconHitboxPaddingX;
@property(nonatomic) _Bool alwaysHitTestNearestIcon; // @synthesize alwaysHitTestNearestIcon=_alwaysHitTestNearestIcon;
@property(nonatomic) _Bool suppressJitter; // @synthesize suppressJitter=_suppressJitter;
- (void)setDefaultValues;

@end
