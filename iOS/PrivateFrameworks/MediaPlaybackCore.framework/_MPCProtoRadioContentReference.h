//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying>
{
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;
}

@property(retain, nonatomic) _MPCProtoRadioContentReferenceStoreContentReference *storeContentReference; // @synthesize storeContentReference=_storeContentReference;
@property(retain, nonatomic) _MPCProtoRadioContentReferenceLibraryItemContentReference *libraryItemContentReference; // @synthesize libraryItemContentReference=_libraryItemContentReference;
@property(retain, nonatomic) _MPCProtoRadioContentReferenceLibraryArtistContentReference *libraryArtistContentReference; // @synthesize libraryArtistContentReference=_libraryArtistContentReference;
@property(retain, nonatomic) _MPCProtoRadioContentReferenceLibraryAlbumContentReference *libraryAlbumContentReference; // @synthesize libraryAlbumContentReference=_libraryAlbumContentReference;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasStoreContentReference;
@property(readonly, nonatomic) _Bool hasLibraryItemContentReference;
@property(readonly, nonatomic) _Bool hasLibraryArtistContentReference;
@property(readonly, nonatomic) _Bool hasLibraryAlbumContentReference;

@end
