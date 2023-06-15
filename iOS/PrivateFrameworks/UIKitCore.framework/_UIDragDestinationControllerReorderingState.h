//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UICollectionView, _UIDragDestinationControllerSessionState, _UIDragMovementCadenceSettings, _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerReorderingState : NSObject
{
    _Bool _supportsLocalSessionReordering;
    _Bool _hasStartedInteractiveReorder;
    _UIVelocityIntegrator *_velocityIntegrator;
    long long _reorderCount;
    _UIDragMovementCadenceSettings *_reorderCadenceSettings;
    _UIDragDestinationControllerSessionState *_sessionState;
    UICollectionView *_collectionView;
    double _reorderBecamePossibleTime;
    long long _dragMovementPhase;
}

- (void).cxx_destruct;
@property(nonatomic) long long dragMovementPhase; // @synthesize dragMovementPhase=_dragMovementPhase;
@property(nonatomic) double reorderBecamePossibleTime; // @synthesize reorderBecamePossibleTime=_reorderBecamePossibleTime;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) _Bool hasStartedInteractiveReorder; // @synthesize hasStartedInteractiveReorder=_hasStartedInteractiveReorder;
@property(retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings; // @synthesize reorderCadenceSettings=_reorderCadenceSettings;
@property(nonatomic) long long reorderCount; // @synthesize reorderCount=_reorderCount;
@property(nonatomic) _Bool supportsLocalSessionReordering; // @synthesize supportsLocalSessionReordering=_supportsLocalSessionReordering;
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
- (id)_reorderCadenceSettings;
- (void)velocityExceededThreshold;
- (_Bool)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1;
- (void)reorderingDidBecomePossible;
@property(readonly, nonatomic) _Bool hasPerformedReordering;
- (void)reorderResetToStartingLocation;
- (void)didEndInteractiveReorder;
- (void)didBeginInteractiveReorder;
- (void)didReorder;
- (id)initWithSessionState:(id)arg1 collectionView:(id)arg2;

@end

