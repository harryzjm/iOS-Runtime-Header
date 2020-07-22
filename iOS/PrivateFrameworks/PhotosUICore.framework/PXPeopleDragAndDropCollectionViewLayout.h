//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSTimer;
@protocol PXPeopleDragAndDropCollectionViewDelegateLayout;

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _performActualRearrange;
    NSTimer *_dragPauseTimer;
    NSIndexPath *_dragIndexPathForMerge;
    NSIndexPath *_targetIndexPathForMerge;
    struct CGPoint _lastDragPoint;
    struct CGPoint _currentPosition;
}

@property(retain, nonatomic) NSIndexPath *targetIndexPathForMerge; // @synthesize targetIndexPathForMerge=_targetIndexPathForMerge;
@property(retain, nonatomic) NSIndexPath *dragIndexPathForMerge; // @synthesize dragIndexPathForMerge=_dragIndexPathForMerge;
@property(nonatomic) _Bool performActualRearrange; // @synthesize performActualRearrange=_performActualRearrange;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) struct CGPoint lastDragPoint; // @synthesize lastDragPoint=_lastDragPoint;
@property(retain, nonatomic) NSTimer *dragPauseTimer; // @synthesize dragPauseTimer=_dragPauseTimer;
- (void).cxx_destruct;
- (void)_cancelDragPauseTimer;
- (void)_updateDragPause;
- (void)_potentialMergeWithDragIndexPath:(id)arg1 ontoIndexPath:(id)arg2 withPosition:(struct CGPoint)arg3;
- (void)dealloc;
@property(readonly, nonatomic) id <PXPeopleDragAndDropCollectionViewDelegateLayout> mergeDelegate;
- (_Bool)performMergeIfPossible;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)init;

@end

