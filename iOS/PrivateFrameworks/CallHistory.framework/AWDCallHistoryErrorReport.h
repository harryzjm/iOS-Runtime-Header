//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@interface AWDCallHistoryErrorReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _domain;
    unsigned int _error;
    CDStruct_6e486683 _has;
}

@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasTimestamp;

@end

