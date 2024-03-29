//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, OADColorMap, OADTextListStyle, OADTheme, PDPresentation;

__attribute__((visibility("hidden")))
@interface PDSlideMaster
{
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
    _Bool mHeaderPlaceholderIsVisible;
    _Bool mFooterPlaceholderIsVisible;
    _Bool mSlideNumberPlaceholderIsVisible;
    _Bool mDateTimePlaceholderIsVisible;
    PDPresentation *mPresentation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dateTimePlaceholderIsVisible; // @synthesize dateTimePlaceholderIsVisible=mDateTimePlaceholderIsVisible;
@property(nonatomic) _Bool slideNumberPlaceholderIsVisible; // @synthesize slideNumberPlaceholderIsVisible=mSlideNumberPlaceholderIsVisible;
@property(nonatomic) _Bool footerPlaceholderIsVisible; // @synthesize footerPlaceholderIsVisible=mFooterPlaceholderIsVisible;
@property(nonatomic) _Bool headerPlaceholderIsVisible; // @synthesize headerPlaceholderIsVisible=mHeaderPlaceholderIsVisible;
@property(retain, nonatomic) NSMutableArray *slideLayouts; // @synthesize slideLayouts=mSlideLayouts;
@property(readonly, nonatomic) __weak PDPresentation *presentation; // @synthesize presentation=mPresentation;
- (id)description;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)defaultTextListStyle;
- (id)drawingTheme;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (void)setOtherTextStyle:(id)arg1;
- (id)otherTextStyle;
- (void)setBodyTextStyle:(id)arg1;
- (id)bodyTextStyle;
- (void)setTitleTextStyle:(id)arg1;
- (id)titleTextStyle;
- (id)defaultTheme;
- (id)slideLayoutOfType:(int)arg1;
- (id)addSlideLayout;
- (void)addSlideLayout:(id)arg1;
- (id)slideLayoutAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideLayoutCount;
- (id)styleMatrix;
- (id)colorMap;
- (id)fontScheme;
- (id)colorScheme;
- (id)theme;
- (id)initWithPresentation:(id)arg1;

@end

