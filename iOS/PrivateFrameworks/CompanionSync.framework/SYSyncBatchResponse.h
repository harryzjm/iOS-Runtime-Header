//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYSyncBatchResponse : PBCodable <NSCopying>
{
    unsigned long long _index;
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSString *_sessionID;
}

@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
@property(readonly, nonatomic) _Bool hasError;

@end

