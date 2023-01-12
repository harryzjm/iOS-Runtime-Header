//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface CNBadgingAvatarBadgeStyleSettings : NSObject
{
    long long _position;
    UIColor *_color;
    UIColor *_backgroundColor;
    long long _cropStyle;
    long long _contentMode;
}

+ (id)doNotDisturbBadgeSettings;
+ (id)markedForSyndicationBadgeSettings;
+ (unsigned long long)cnuiBadgeCropStyle:(long long)arg1;
+ (long long)cnuiBadgePosition:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) long long cropStyle; // @synthesize cropStyle=_cropStyle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long position; // @synthesize position=_position;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)cnuiCropStyle;
- (long long)cnuiBadgePosition;
- (id)initWithPosition:(long long)arg1 color:(id)arg2 backgroundColor:(id)arg3 cropStyle:(long long)arg4;
- (id)init;

@end
