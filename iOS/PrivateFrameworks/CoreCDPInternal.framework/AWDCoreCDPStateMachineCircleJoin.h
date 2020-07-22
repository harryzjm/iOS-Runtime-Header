//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreCDPInternal/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreCDPStateMachineCircleJoin : PBCodable <NSCopying>
{
    long long _circleStatus;
    long long _errorCode;
    unsigned long long _timestamp;
    NSString *_errorDomain;
    _Bool _hasPeersForRemoteApproval;
    _Bool _needsBackupRecovery;
    struct {
        unsigned int circleStatus:1;
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int hasPeersForRemoteApproval:1;
        unsigned int needsBackupRecovery:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) _Bool hasPeersForRemoteApproval; // @synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval;
@property(nonatomic) _Bool needsBackupRecovery; // @synthesize needsBackupRecovery=_needsBackupRecovery;
@property(nonatomic) long long circleStatus; // @synthesize circleStatus=_circleStatus;
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
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasHasPeersForRemoteApproval;
@property(nonatomic) _Bool hasNeedsBackupRecovery;
@property(nonatomic) _Bool hasCircleStatus;
@property(nonatomic) _Bool hasTimestamp;

@end

