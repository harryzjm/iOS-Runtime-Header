//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFFluidCollectionView;

__attribute__((visibility("hidden")))
@interface SFFluidCollectionViewDragContext : NSObject
{
    SFFluidCollectionView *_fluidCollectionView;
    id _dragDelegateContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id dragDelegateContext; // @synthesize dragDelegateContext=_dragDelegateContext;
@property(readonly, nonatomic) __weak SFFluidCollectionView *fluidCollectionView; // @synthesize fluidCollectionView=_fluidCollectionView;
- (id)getValueWithDelegateObjectsOnSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)performWithDelegateObjectsOnSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithFluidCollectionView:(id)arg1;

@end

