//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPFavorite-Protocol.h>
#import <MapsSupport/MSPIdentifiableFavorite-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class MSPBookmarkStorage, NSString, NSUUID;

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPMutableObject, MSPIdentifiableFavorite>
{
    _Bool _immutable;
    NSUUID *_storageIdentifier;
    MSPBookmarkStorage *_bookmarkStorage;
}

+ (id)mutableFavoriteForBookmarkStorage:(id)arg1;
+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
@property(readonly, nonatomic, getter=_isImmutable) _Bool immutable; // @synthesize immutable=_immutable;
@property(readonly, nonatomic) MSPBookmarkStorage *bookmarkStorage; // @synthesize bookmarkStorage=_bookmarkStorage;
@property(readonly, nonatomic) NSUUID *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
- (void).cxx_destruct;
- (_Bool)isUserVisibleDuplicateOfFavorite:(id)arg1;
- (void)_noteWillMutate;
- (void)_markImmutable;
- (id)persisterOnlyBookmarkStorage;
- (id)copyIfValidWithError:(out id *)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)ifMutablePlace:(CDUnknownBlockType)arg1 ifMutableRoute:(CDUnknownBlockType)arg2 ifMutableRegion:(CDUnknownBlockType)arg3 ifMutableTransitLine:(CDUnknownBlockType)arg4;
- (void)ifPlace:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifRegion:(CDUnknownBlockType)arg3 ifTransitLine:(CDUnknownBlockType)arg4;
- (id)initWithBookmarkStorage:(id)arg1;
- (id)init;
- (id)abridgedBookmarkStorageForSpotlightStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

