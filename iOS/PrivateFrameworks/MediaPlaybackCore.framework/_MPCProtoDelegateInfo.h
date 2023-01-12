//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoDelegateInfo : PBCodable
{
    unsigned long long _accountID;
    long long _delegateInfoID;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_requestUserAgent;
    int _systemReleaseType;
    NSString *_timeZoneName;
    NSString *_uuid;
    _Bool _privateListeningEnabled;
    struct {
        unsigned int accountID:1;
        unsigned int delegateInfoID:1;
        unsigned int systemReleaseType:1;
        unsigned int privateListeningEnabled:1;
    } _has;
}

+ (id)currentDeviceDelegateInfo;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)_getPlaybackRequestEnvironmentWithBaseEnvironment:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

