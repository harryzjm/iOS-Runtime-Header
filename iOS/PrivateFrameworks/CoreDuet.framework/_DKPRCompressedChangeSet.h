//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSData;

@interface _DKPRCompressedChangeSet : PBCodable <NSCopying>
{
    unsigned long long _uncompressedLength;
    NSData *_compressedData;
}

@property(retain, nonatomic) NSData *compressedData; // @synthesize compressedData=_compressedData;
@property(nonatomic) unsigned long long uncompressedLength; // @synthesize uncompressedLength=_uncompressedLength;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

