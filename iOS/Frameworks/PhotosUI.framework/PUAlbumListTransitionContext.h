//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, PHCollection, PUPhotoDecoration, UICollectionViewTransitionLayout;
@protocol PLAssetContainer;

@interface PUAlbumListTransitionContext : NSObject
{
    _Bool _usesContentOffsetAutoAdjust;
    id <PLAssetContainer> _collection;
    PHCollection *_phCollection;
    NSIndexPath *_keyItemIndexPath;
    PUPhotoDecoration *_photoDecoration;
    UICollectionViewTransitionLayout *_transitionLayout;
}

@property(retain, nonatomic) UICollectionViewTransitionLayout *transitionLayout; // @synthesize transitionLayout=_transitionLayout;
@property(nonatomic) _Bool usesContentOffsetAutoAdjust; // @synthesize usesContentOffsetAutoAdjust=_usesContentOffsetAutoAdjust;
@property(retain, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(retain, nonatomic) NSIndexPath *keyItemIndexPath; // @synthesize keyItemIndexPath=_keyItemIndexPath;
@property(retain, nonatomic) PHCollection *phCollection; // @synthesize phCollection=_phCollection;
@property(retain, nonatomic) id <PLAssetContainer> collection; // @synthesize collection=_collection;
- (void).cxx_destruct;

@end
