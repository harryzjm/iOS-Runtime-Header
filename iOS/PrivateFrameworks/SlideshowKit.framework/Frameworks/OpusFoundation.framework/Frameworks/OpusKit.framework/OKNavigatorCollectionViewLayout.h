//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, OKNavigatorCollectionViewController, UIPanGestureRecognizer;

@interface OKNavigatorCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>
{
    OKNavigatorCollectionViewController *_collectionViewController;
    unsigned long long _transitionStyle;
    NSIndexPath *_sourceItemIndexPath;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGRect _oldBounds;
}

@property(retain, nonatomic) NSIndexPath *sourceItemIndexPath; // @synthesize sourceItemIndexPath=_sourceItemIndexPath;
@property(nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (id)itemClosestToCenter;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
@property(nonatomic) OKNavigatorCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

