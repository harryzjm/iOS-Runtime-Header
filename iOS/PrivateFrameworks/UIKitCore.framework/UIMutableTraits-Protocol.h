//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;
@protocol NSObject;

@protocol UIMutableTraits <NSObject>
@property(copy, nonatomic) NSString *typesettingLanguage;
@property(nonatomic) long long imageDynamicRange;
@property(nonatomic) long long toolbarItemPresentationSize;
@property(nonatomic) long long activeAppearance;
@property(nonatomic) long long legibilityWeight;
@property(nonatomic) long long userInterfaceLevel;
@property(nonatomic) long long accessibilityContrast;
@property(nonatomic) long long displayGamut;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(nonatomic) long long forceTouchCapability;
@property(nonatomic) long long verticalSizeClass;
@property(nonatomic) long long horizontalSizeClass;
@property(nonatomic) double displayScale;
@property(nonatomic) long long layoutDirection;
@property(nonatomic) long long userInterfaceStyle;
@property(nonatomic) long long userInterfaceIdiom;
- (id <NSObject>)objectForTrait:(Class)arg1;
- (void)setObject:(id <NSObject>)arg1 forTrait:(Class)arg2;
- (long long)valueForNSIntegerTrait:(Class)arg1;
- (void)setNSIntegerValue:(long long)arg1 forTrait:(Class)arg2;
- (double)valueForCGFloatTrait:(Class)arg1;
- (void)setCGFloatValue:(double)arg1 forTrait:(Class)arg2;
@end

