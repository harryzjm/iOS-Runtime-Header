//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@class NSString;

@interface AWDSharingProximityPairingResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _connectErrors;
    int _errorCode;
    unsigned int _pairingMs;
    NSString *_sessionUUID;
    unsigned int _userResponseMs;
    _Bool _userAccepted;
    struct {
        unsigned int timestamp:1;
        unsigned int connectErrors:1;
        unsigned int errorCode:1;
        unsigned int pairingMs:1;
        unsigned int userResponseMs:1;
        unsigned int userAccepted:1;
    } _has;
}

@property(nonatomic) unsigned int connectErrors; // @synthesize connectErrors=_connectErrors;
@property(nonatomic) unsigned int pairingMs; // @synthesize pairingMs=_pairingMs;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int userResponseMs; // @synthesize userResponseMs=_userResponseMs;
@property(nonatomic) _Bool userAccepted; // @synthesize userAccepted=_userAccepted;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasConnectErrors;
@property(nonatomic) _Bool hasPairingMs;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasUserResponseMs;
@property(nonatomic) _Bool hasUserAccepted;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(nonatomic) _Bool hasTimestamp;

@end
