//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSMutableArray, _MPCProtoContainerIdentifierSet;

@interface _MPCProtoContainer : PBCodable <NSCopying>
{
    int _containerType;
    _MPCProtoContainerIdentifierSet *_identifierSet;
    NSMutableArray *_items;
    struct {
        unsigned int containerType:1;
    } _has;
}

+ (Class)itemType;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) _MPCProtoContainerIdentifierSet *identifierSet; // @synthesize identifierSet=_identifierSet;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)addItem:(id)arg1;
- (void)clearItems;
@property(readonly, nonatomic) _Bool hasIdentifierSet;
@property(nonatomic) _Bool hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;

@end
