//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFFluidCollectionView, UIDragInteraction;

__attribute__((visibility("hidden")))
@interface SFFluidCollectionViewDragCoordinator : NSObject
{
    UIDragInteraction *_dragInteraction;
    SFFluidCollectionView *_fluidCollectionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak SFFluidCollectionView *fluidCollectionView; // @synthesize fluidCollectionView=_fluidCollectionView;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)initWithFluidCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

