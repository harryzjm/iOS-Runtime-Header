//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying>
{
    _MPCProtoItemIdentifierSet *_identifierSet;
    int _mediaType;
    _Bool _excludeFromShuffle;
    struct {
        unsigned int mediaType:1;
        unsigned int excludeFromShuffle:1;
    } _has;
}

@property(nonatomic) _Bool excludeFromShuffle; // @synthesize excludeFromShuffle=_excludeFromShuffle;
@property(retain, nonatomic) _MPCProtoItemIdentifierSet *identifierSet; // @synthesize identifierSet=_identifierSet;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExcludeFromShuffle;
@property(readonly, nonatomic) _Bool hasIdentifierSet;
@property(nonatomic) _Bool hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end

