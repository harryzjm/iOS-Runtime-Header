//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaQuery, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MPStoreCompletionOfferingLookupItem : NSObject
{
    _Bool _wantsArtwork;
    MPMediaQuery *_albumItemsQuery;
    unsigned long long _tokenID;
    CDUnknownBlockType _responseBlock;
    NSNumber *_storeLookupID;
}

+ (id)storeLookupIDForAlbumItemsQuery:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *storeLookupID; // @synthesize storeLookupID=_storeLookupID;
@property(readonly, nonatomic) _Bool wantsArtwork; // @synthesize wantsArtwork=_wantsArtwork;
@property(readonly, copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(readonly, nonatomic) unsigned long long tokenID; // @synthesize tokenID=_tokenID;
@property(readonly, nonatomic) MPMediaQuery *albumItemsQuery; // @synthesize albumItemsQuery=_albumItemsQuery;
- (id)_specificationForArtworkSizesToRequest;
- (id)newLookupRequest;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1;
- (id)lookupRequestForStorePlaylistIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *storeLookupIDString;
- (id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(_Bool)arg3 responseBlock:(CDUnknownBlockType)arg4;

@end
