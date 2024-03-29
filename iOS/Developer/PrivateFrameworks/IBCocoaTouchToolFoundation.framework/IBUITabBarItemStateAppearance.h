//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBColor, IBOffsetWrapper, IBUITextAttributes;

@interface IBUITabBarItemStateAppearance : NSObject
{
    IBUITextAttributes *_titleTextAttributes;
    IBOffsetWrapper *_titlePositionAdjustment;
    IBColor *_iconColor;
    IBOffsetWrapper *_badgePositionAdjustment;
    IBColor *_badgeBackgroundColor;
    IBUITextAttributes *_badgeTextAttributes;
    IBOffsetWrapper *_badgeTitlePositionAdjustment;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IBOffsetWrapper *badgeTitlePositionAdjustment; // @synthesize badgeTitlePositionAdjustment=_badgeTitlePositionAdjustment;
@property(copy, nonatomic) IBUITextAttributes *badgeTextAttributes; // @synthesize badgeTextAttributes=_badgeTextAttributes;
@property(copy, nonatomic) IBColor *badgeBackgroundColor; // @synthesize badgeBackgroundColor=_badgeBackgroundColor;
@property(copy, nonatomic) IBOffsetWrapper *badgePositionAdjustment; // @synthesize badgePositionAdjustment=_badgePositionAdjustment;
@property(copy, nonatomic) IBColor *iconColor; // @synthesize iconColor=_iconColor;
@property(copy, nonatomic) IBOffsetWrapper *titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(copy, nonatomic) IBUITextAttributes *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

