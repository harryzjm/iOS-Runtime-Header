//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYMessageHeader;

@interface SYRejectedVersion : PBCodable <NSCopying>
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedVersions;
    SYMessageHeader *_header;
    NSString *_inReplyTo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setSupportedVersions:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)supportedVersionsAtIndex:(unsigned long long)arg1;
- (void)addSupportedVersions:(unsigned int)arg1;
- (void)clearSupportedVersions;
@property(readonly, nonatomic) unsigned int *supportedVersions;
@property(readonly, nonatomic) unsigned long long supportedVersionsCount;
- (void)dealloc;

@end
