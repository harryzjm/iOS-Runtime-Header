//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVTUIEnvironment, NSIndexPath, UICollectionViewUpdateItem;

@interface AVTZIndexEngagementListCollectionViewLayout
{
    NSIndexPath *_backIndexPath;
    NSIndexPath *_plusButtonIndexPath;
    UICollectionViewUpdateItem *_currentUpdateItem;
    double _minAlphaFactor;
    AVTUIEnvironment *_environment;
}

@property(retain, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) double minAlphaFactor; // @synthesize minAlphaFactor=_minAlphaFactor;
@property(retain, nonatomic) UICollectionViewUpdateItem *currentUpdateItem; // @synthesize currentUpdateItem=_currentUpdateItem;
@property(retain, nonatomic) NSIndexPath *plusButtonIndexPath; // @synthesize plusButtonIndexPath=_plusButtonIndexPath;
@property(retain, nonatomic) NSIndexPath *backIndexPath; // @synthesize backIndexPath=_backIndexPath;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (double)alphaForElementWithAttributes:(id)arg1;
- (long long)zIndexForElementWithAttributes:(id)arg1;
- (struct UIEdgeInsets)engagementInsetsForCollectionViewBounds:(struct CGSize)arg1;
- (id)initWithEngagementLayout:(id)arg1 minAlphaFactor:(double)arg2 environment:(id)arg3;

@end
