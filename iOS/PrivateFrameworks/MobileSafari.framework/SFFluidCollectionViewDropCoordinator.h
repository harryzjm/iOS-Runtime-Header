//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSString, SFFluidCollectionView, UIDropInteraction;
@protocol SFFluidCollectionShadowUpdateToken;

__attribute__((visibility("hidden")))
@interface SFFluidCollectionViewDropCoordinator : NSObject
{
    UIDropInteraction *_dropInteraction;
    id <SFFluidCollectionShadowUpdateToken> _shadowDeleteToken;
    NSArray *_shadowDeletedDragItems;
    id <SFFluidCollectionShadowUpdateToken> _shadowInsertToken;
    NSArray *_items;
    NSIndexPath *_destinationIndexPath;
    SFFluidCollectionView *_fluidCollectionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak SFFluidCollectionView *fluidCollectionView; // @synthesize fluidCollectionView=_fluidCollectionView;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)_clearAllShadowUpdatesForSession:(id)arg1;
- (void)_clearShadowInsertForSession:(id)arg1;
- (void)_clearShadowDeletesForSession:(id)arg1;
- (id)_destinationIndexPathForLocation:(struct CGPoint)arg1;
- (id)_getValueWithDragDelegateObjectsForSession:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performWithDragDelegateObjectsForSession:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSIndexPath *destinationIndexPath; // @synthesize destinationIndexPath=_destinationIndexPath;
- (id)initWithFluidCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

