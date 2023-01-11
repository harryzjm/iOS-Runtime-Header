//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHBatchFetchedPropertySet-Protocol.h>
#import <Photos/PHThumbnailAsset-Protocol.h>
#import <Photos/_PLThumbnailLoadingAsset-Protocol.h>

@class NSKnownKeysDictionary, NSManagedObjectID, NSString, PHPhotoLibrary;

@interface PHThumbnailAsset : NSObject <_PLThumbnailLoadingAsset, PHThumbnailAsset, PHBatchFetchedPropertySet>
{
    NSKnownKeysDictionary *_dictionary;
    NSManagedObjectID *_objectID;
}

+ (id)propertiesToFetch;
+ (id)fetchType;
+ (_Bool)useObjectFetchingContext;
+ (id)propertiesToSortBy;
+ (_Bool)useNoIndexSelf;
+ (long long)cacheSize;
+ (long long)batchSize;
+ (id)entityName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
- (id)pl_photoLibrary;
- (unsigned long long)effectiveThumbnailIndex;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property(readonly, nonatomic) long long cloudPlaceholderKind;
@property(readonly, nonatomic) _Bool complete;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
