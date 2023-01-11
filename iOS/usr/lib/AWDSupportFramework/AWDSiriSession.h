//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDSiriSession : PBCodable <NSCopying>
{
    unsigned long long _sessionEndTimestamp;
    unsigned long long _sessionStartTimestamp;
    unsigned long long _timestamp;
    NSString *_companionModel;
    NSString *_companionOS;
    NSMutableArray *_siriRequests;
    struct {
        unsigned int sessionEndTimestamp:1;
        unsigned int sessionStartTimestamp:1;
        unsigned int timestamp:1;
    } _has;
}

+ (Class)siriRequestType;
@property(retain, nonatomic) NSMutableArray *siriRequests; // @synthesize siriRequests=_siriRequests;
@property(retain, nonatomic) NSString *companionOS; // @synthesize companionOS=_companionOS;
@property(retain, nonatomic) NSString *companionModel; // @synthesize companionModel=_companionModel;
@property(nonatomic) unsigned long long sessionEndTimestamp; // @synthesize sessionEndTimestamp=_sessionEndTimestamp;
@property(nonatomic) unsigned long long sessionStartTimestamp; // @synthesize sessionStartTimestamp=_sessionStartTimestamp;
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
- (id)siriRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)siriRequestsCount;
- (void)addSiriRequest:(id)arg1;
- (void)clearSiriRequests;
@property(readonly, nonatomic) _Bool hasCompanionOS;
@property(readonly, nonatomic) _Bool hasCompanionModel;
@property(nonatomic) _Bool hasSessionEndTimestamp;
@property(nonatomic) _Bool hasSessionStartTimestamp;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

