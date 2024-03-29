//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PUCollectionsCollectionViewDropDataProvider;

__attribute__((visibility("hidden")))
@interface PUCollectionsCollectionViewDropDelegate : NSObject
{
    _Bool _dataProviderImplementsAllowDrop;
    id <PUCollectionsCollectionViewDropDataProvider> _dropDataProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUCollectionsCollectionViewDropDataProvider> dropDataProvider; // @synthesize dropDataProvider=_dropDataProvider;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSesson:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (void)_handleDrop:(id)arg1 forItemAtIndexPath:(id)arg2;
- (_Bool)_canHandleDropSession:(id)arg1;
- (id)_collectionAtIndexPath:(id)arg1;
- (_Bool)_allowDrop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

