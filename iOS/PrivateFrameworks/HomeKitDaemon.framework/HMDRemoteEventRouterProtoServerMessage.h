//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDRemoteEventRouterProtoChangeRegistrationsResponse, HMDRemoteEventRouterProtoConnectResponse, HMDRemoteEventRouterProtoEventsMessage, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying>
{
    HMDRemoteEventRouterProtoChangeRegistrationsResponse *_changeRegistrationsResponse;
    HMDRemoteEventRouterProtoConnectResponse *_connectResponse;
    NSString *_identifier;
    int _message;
    HMDRemoteEventRouterProtoEventsMessage *_updatedEvents;
    struct {
        unsigned int message:1;
    } _has;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end
