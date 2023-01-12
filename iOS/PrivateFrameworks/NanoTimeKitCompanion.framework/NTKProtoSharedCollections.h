//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTKProtoSharedCollections : PBCodable <NSCopying>
{
    NSMutableArray *_collections;
}

+ (Class)collectionsType;
+ (id)protoBufferFromSharedCollections:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *collections; // @synthesize collections=_collections;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)collectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionsCount;
- (void)addCollections:(id)arg1;
- (void)clearCollections;
- (id)sharedCollectionsDictionary;

@end
