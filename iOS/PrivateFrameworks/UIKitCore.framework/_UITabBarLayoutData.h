//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UITabBarLayoutData
{
    UIColor *_selectionIndicatorTintColor;
    UIImage *_selectionIndicatorImage;
    long long _itemPositioning;
    double _itemWidth;
    double _itemSpacing;
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardLayoutData;
- (void).cxx_destruct;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage=_selectionIndicatorImage;
@property(copy, nonatomic) UIColor *selectionIndicatorTintColor; // @synthesize selectionIndicatorTintColor=_selectionIndicatorTintColor;
- (long long)positioningForTraitCollection:(id)arg1;
- (id)replicate;
- (_Bool)checkEqualTo:(id)arg1;
- (long long)hashInto:(long long)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;

@end

