//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSCoding-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist <NSCoding, NSCopying>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

- (void).cxx_destruct;
- (_Bool)_allowsEditing;
- (void)endGeneratingGeniusClusterItems;
- (id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id *)arg2;
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeFirstItem;
- (void)removeAllItems;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appendItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceItemsWithPersistentIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateLibraryForPlaylistEdit:(id)arg1;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)multiverseIdentifier;
- (unsigned long long)mediaTypes;
- (unsigned long long)count;
- (id)representativeItem;
- (id)items;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)existsInLibrary;
- (id)mediaLibrary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)itemsQuery;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;

@end

