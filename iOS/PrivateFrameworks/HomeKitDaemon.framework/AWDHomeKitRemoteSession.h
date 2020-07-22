//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitRemoteSession : PBCodable <NSCopying>
{
    unsigned long long _duration;
    unsigned long long _timestamp;
    unsigned int _closeReason;
    unsigned int _deviceType;
    int _errorCode;
    unsigned int _role;
    struct {
        unsigned int duration:1;
        unsigned int timestamp:1;
        unsigned int closeReason:1;
        unsigned int deviceType:1;
        unsigned int errorCode:1;
        unsigned int role:1;
    } _has;
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
@property(nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
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
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasCloseReason;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasRole;
@property(nonatomic) _Bool hasDeviceType;
@property(nonatomic) _Bool hasTimestamp;

@end

