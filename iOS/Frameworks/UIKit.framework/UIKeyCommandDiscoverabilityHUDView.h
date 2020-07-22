//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDColumnViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIBlurEffect, UICollectionView, UICollectionViewFlowLayout, UIKeyCommandDiscoverabilityHUDVisualStyle, UIPageControl, UIVibrancyEffect, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDView <UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSArray *_keyCommands;
    UIView *_HUDOutlineView;
    NSLayoutConstraint *_HUDOutlineViewWidthConstraint;
    NSLayoutConstraint *_HUDOutlineViewHeightConstraint;
    UIBlurEffect *_blurEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_backdropView;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewTopConstraint;
    NSLayoutConstraint *_collectionViewBottomConstraint;
    NSLayoutConstraint *_collectionViewLeadingConstraint;
    NSLayoutConstraint *_collectionViewTrailingConstraint;
    UIPageControl *_pageControl;
    NSLayoutConstraint *_pageControlYAnchor;
    double _fontScaleFactor;
    unsigned long long _pageCount;
    unsigned long long _cellsPerColumn;
    struct CGSize _columnSize;
    _Bool _twoColumnsPerPage;
    _Bool _shouldUseWordsNotSymbols;
    UIKeyCommandDiscoverabilityHUDVisualStyle *_visualStyle;
}

@property(readonly, nonatomic, getter=_shouldUseWordsNotSymbols) _Bool shouldUseWordsNotSymbols; // @synthesize shouldUseWordsNotSymbols=_shouldUseWordsNotSymbols;
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (void).cxx_destruct;
- (void)_pageControlValueChanged:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_columnViewForColumnIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)recalculatePages;
- (struct CGSize)_bestColumnSizeWithCellsPerColumn:(unsigned long long)arg1 maxColumnSize:(struct CGSize)arg2 columnCount:(unsigned long long)arg3 usingColumnView:(id)arg4 getFontScaleFactor:(double *)arg5;
- (id)_keyCommandsForColumnIndex:(unsigned long long)arg1 withCellsPerColumn:(unsigned long long)arg2;
- (id)_discoverabilityTitleForKeyCommand:(id)arg1;
- (id)_stringForInput:(id)arg1 withModifierFlags:(long long)arg2;
- (id)_stringForModifierFlags:(long long)arg1;
- (id)discoverabilityHUDColumnView:(id)arg1 inputStringForKeyCommand:(id)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 modifiersStringForKeyCommand:(id)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 descriptionStringForKeyCommand:(id)arg2;
- (id)_displayInputAndModifierFlagsForInput:(id)arg1 modifierFlags:(long long)arg2;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateIn;
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

