//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration
{
    _Bool _collectionType;
    _Bool _hasNonPurgeableAsset;
    _Bool _storeRedownloadable;
    long long _managedStatus;
}

@property(nonatomic, getter=isStoreRedownloadable) _Bool storeRedownloadable; // @synthesize storeRedownloadable=_storeRedownloadable;
@property(nonatomic) _Bool hasNonPurgeableAsset; // @synthesize hasNonPurgeableAsset=_hasNonPurgeableAsset;
@property(nonatomic) long long managedStatus; // @synthesize managedStatus=_managedStatus;
@property(nonatomic, getter=isCollectionType) _Bool collectionType; // @synthesize collectionType=_collectionType;

@end

