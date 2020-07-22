//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSData, NSString, SYMessageHeader;

@interface SYStartSyncSession : PBCodable <NSCopying>
{
    double _sessionTimeout;
    SYMessageHeader *_header;
    NSData *_metadata;
    NSString *_reason;
    NSString *_sessionID;
    _Bool _expectsRestartSupport;
    _Bool _expectsRollbackSupport;
    _Bool _isResetSync;
}

@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;
@property(nonatomic) _Bool expectsRestartSupport; // @synthesize expectsRestartSupport=_expectsRestartSupport;
@property(nonatomic) _Bool expectsRollbackSupport; // @synthesize expectsRollbackSupport=_expectsRollbackSupport;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool isResetSync; // @synthesize isResetSync=_isResetSync;
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
@property(readonly, nonatomic) _Bool hasReason;
@property(readonly, nonatomic) _Bool hasMetadata;

@end

