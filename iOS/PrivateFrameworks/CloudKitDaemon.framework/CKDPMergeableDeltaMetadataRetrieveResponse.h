//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable
{
    NSData *_continuation;
    NSMutableArray *_metadatas;
}

+ (Class)metadataType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *continuation; // @synthesize continuation=_continuation;
@property(retain, nonatomic) NSMutableArray *metadatas; // @synthesize metadatas=_metadatas;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasContinuation;
- (id)metadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)metadatasCount;
- (void)addMetadata:(id)arg1;
- (void)clearMetadatas;

@end

