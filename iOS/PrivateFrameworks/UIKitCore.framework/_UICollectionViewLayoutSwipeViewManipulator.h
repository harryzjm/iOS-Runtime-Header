//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICollectionView, _UICollectionViewLayoutSwipeActionsModule;

__attribute__((visibility("hidden")))
@interface _UICollectionViewLayoutSwipeViewManipulator : NSObject
{
    UICollectionView *_collectionView;
    _UICollectionViewLayoutSwipeActionsModule *_swipeActionsModule;
}

- (void).cxx_destruct;
- (struct CGRect)restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2;
- (void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(CDStruct_b06b0113)arg3 animator:(id)arg4;
- (id)initWithCollectionView:(id)arg1 swipeActionsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

