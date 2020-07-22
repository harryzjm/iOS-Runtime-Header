//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject
{
    CPLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
}

- (void).cxx_destruct;
- (void)removeExpiredMetadata;
- (id)metadataForItemIdentifier:(id)arg1;
@property(readonly, nonatomic) long long count;
- (id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)initWithCacheSize:(long long)arg1;

@end

