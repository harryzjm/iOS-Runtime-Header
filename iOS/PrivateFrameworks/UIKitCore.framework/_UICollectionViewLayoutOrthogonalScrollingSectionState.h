//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionViewLayoutOrthogonalScrollingSectionState-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewLayoutOrthogonalScrollingSectionState : NSObject <_UICollectionViewLayoutOrthogonalScrollingSectionState, NSCopying>
{
    unsigned long long _orthogonalLayoutAxis;
    unsigned long long _layoutAxis;
    double _pagingDimension;
    double _groupDimension;
    struct CGPoint _orthogonalContentOffset;
    struct CGSize _contentSize;
    struct CGRect _layoutFrame;
    struct NSDirectionalEdgeInsets _contentInsets;
}

+ (id)orthogonalScrollingSectionStateFromCompositionalLayoutSolver:(id)arg1 section:(long long)arg2;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(readonly, nonatomic) double groupDimension; // @synthesize groupDimension=_groupDimension;
@property(readonly, nonatomic) double pagingDimension; // @synthesize pagingDimension=_pagingDimension;
@property(readonly, nonatomic) unsigned long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(readonly, nonatomic) struct CGPoint orthogonalContentOffset; // @synthesize orthogonalContentOffset=_orthogonalContentOffset;
@property(readonly, nonatomic) unsigned long long orthogonalLayoutAxis; // @synthesize orthogonalLayoutAxis=_orthogonalLayoutAxis;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOrthogonalLayoutAxis:(unsigned long long)arg1 layoutAxis:(unsigned long long)arg2 pagingDimension:(double)arg3 groupDimension:(double)arg4 layoutFrame:(struct CGRect)arg5 contentSize:(struct CGSize)arg6 contentInsets:(struct NSDirectionalEdgeInsets)arg7 orthogonalContentOffset:(struct CGPoint)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
