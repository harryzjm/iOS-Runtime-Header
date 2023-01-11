//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UIColor, UITabBarItemAppearance, _UITabBarItemData;

@interface UITabBarItemStateAppearance : NSObject
{
    UITabBarItemAppearance *_owner;
    long long _state;
    _UITabBarItemData *_data;
    NSArray *_itemEffects;
}

@property(copy, nonatomic) NSArray *itemEffects; // @synthesize itemEffects=_itemEffects;
@property(retain, nonatomic, setter=_setData:) _UITabBarItemData *_data; // @synthesize _data;
- (void).cxx_destruct;
@property(nonatomic) struct UIOffset badgePositionAdjustment;
@property(copy, nonatomic) UIColor *badgeBackgroundColor;
@property(nonatomic) struct UIOffset badgeTitlePositionAdjustment;
@property(copy, nonatomic) NSDictionary *badgeTextAttributes;
@property(copy, nonatomic) UIColor *iconColor;
@property(nonatomic) struct UIOffset titlePositionAdjustment;
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
- (void)_writeToStorage:(CDUnknownBlockType)arg1;
- (void)_clearOwner;
- (id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3;
- (id)init;

@end
