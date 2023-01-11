//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>

@class NSDictionary, NSString;

@interface UITraitCollection : NSObject <_UIFallbackEnvironment, NSCopying, NSSecureCoding>
{
    struct {
        long long userInterfaceIdiom;
        double displayScale;
        long long displayGamut;
        long long touchLevel;
        unsigned long long interactionModel;
        unsigned long long primaryInteractionModel;
        long long artworkSubtype;
        long long horizontalSizeClass;
        long long verticalSizeClass;
        long long userInterfaceStyle;
        long long layoutDirection;
        long long forceTouchCapability;
        long long preferredContentSizeCategory;
        double displayCornerRadius;
        long long legibilityWeight;
        long long semanticContext;
        long long presentationSemanticContext;
        long long splitViewControllerContext;
        long long accessibilityContrast;
        long long userInterfaceLevel;
        long long vibrancy;
        long long activeAppearance;
    } _builtinTraits;
    NSDictionary *_clientDefinedTraits;
    NSObject *_environmentWrapper;
}

+ (void)_setCurrentTraitCollection:(id)arg1;
+ (id)_currentTraitCollection;
+ (void)setCurrentTraitCollection:(id)arg1;
+ (id)currentTraitCollection;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)_traitCollectionWithEnvironmentWrapper:(id)arg1;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)arg1;
+ (id)_traitCollectionWithBackgroundLevel:(long long)arg1;
+ (id)_traitCollectionWithContrast:(long long)arg1;
+ (id)_traitCollectionWithVibrancy:(long long)arg1;
+ (id)_traitCollectionWithSplitViewControllerContext:(long long)arg1;
+ (id)_traitCollectionWithPresentationSemanticContext:(long long)arg1;
+ (id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceLevel:(long long)arg1;
+ (id)traitCollectionWithAccessibilityContrast:(long long)arg1;
+ (id)_traitCollectionWithUserInterfaceActiveAppearance:(long long)arg1;
+ (id)traitCollectionWithActiveAppearance:(long long)arg1;
+ (id)traitCollectionWithLegibilityWeight:(long long)arg1;
+ (id)traitCollectionWithDisplayCornerRadius:(double)arg1;
+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)traitCollectionWithLayoutDirection:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithDisplayGamut:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)_descriptionForChangeFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (id)imageConfiguration;
- (_Bool)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg1;
- (void)performAsCurrentTraitCollection:(CDUnknownBlockType)arg1;
- (id)_environmentWrapper;
@property(readonly, copy, nonatomic) NSString *preferredContentSizeCategory;
- (long long)_backgroundLevel;
- (long long)_contrast;
- (long long)_vibrancy;
- (_Bool)_hasSplitViewControllerContextSidebarColumn;
- (_Bool)_hasSplitViewControllerContextPrimaryColumn;
- (long long)_splitViewControllerContext;
- (long long)_presentationSemanticContext;
- (unsigned long long)artworkSubtype;
- (unsigned long long)primaryInteractionModel;
- (unsigned long long)interactionModel;
- (long long)touchLevel;
@property(readonly, nonatomic) long long userInterfaceLevel;
@property(readonly, nonatomic) long long accessibilityContrast;
- (long long)_userInterfaceActiveAppearance;
@property(readonly, nonatomic) long long activeAppearance;
@property(readonly, nonatomic) long long legibilityWeight;
- (double)displayCornerRadius;
@property(readonly, nonatomic) long long forceTouchCapability;
@property(readonly, nonatomic) long long layoutDirection;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) long long verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass;
@property(readonly, nonatomic) long long displayGamut;
@property(readonly, nonatomic) double displayScale;
@property(readonly, nonatomic) long long userInterfaceIdiom;
- (id)_valueForTraitNamed:(id)arg1;
- (id)_traitNamesForUnspecifiedBuiltInTraits;
- (_Bool)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_description;
- (id)_traitsDescription;
- (long long)_compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)init;
- (id)_fallbackTraitCollection;
@property(readonly, nonatomic) _Bool _isLargeContentViewerEnabled;
- (id)_namedImageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
