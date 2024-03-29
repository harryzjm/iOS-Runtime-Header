//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OADBackground, OADTableStyle, PDAnimation, PDTransition;

__attribute__((visibility("hidden")))
@interface PDSlideBase : NSObject
{
    unsigned int mSlideId;
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    PDTransition *mPpt2011Transition;
    OADTableStyle *mDefaultTableStyle;
    unsigned int mIsHidden:1;
    unsigned int mIsDoneWithContent:1;
}

+ (int)inheritedPlaceholderType:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int slideId; // @synthesize slideId=mSlideId;
- (id)description;
- (void)removeUnnecessaryOverrides;
- (void)generatePpt9Animations:(id)arg1;
- (_Bool)hasPpt9Animations;
- (_Bool)hasPpt10Animations;
- (id)drawingTheme;
- (void)doneWithContent;
- (void)setDefaultTableStyle:(id)arg1;
- (id)defaultTableStyle;
- (void)setIsHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (id)styleMatrix;
- (id)colorMap;
- (id)fontScheme;
- (id)colorScheme;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)placeholders;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(_Bool)arg3 overrideIndex:(_Bool)arg4;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)defaultTextListStyle;
- (id)defaultTheme;
- (void)setPpt2011Transition:(id)arg1;
- (id)ppt2011Transition;
- (void)setTransition:(id)arg1;
- (id)transition;
- (id)animation;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setDrawables:(id)arg1;
- (void)setDrawablesNoHierarchy:(id)arg1;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)arg1;
- (void)setUpDrawablePropertyHierarchy;
- (void)setUpPropertyHierarchyForDrawable:(id)arg1;
- (id)drawables;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)addSlideNumberPlaceholder:(id)arg1;
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3;

@end

