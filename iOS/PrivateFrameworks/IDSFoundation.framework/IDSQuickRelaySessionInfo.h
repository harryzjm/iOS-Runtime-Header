//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSUUID;

@interface IDSQuickRelaySessionInfo : NSObject
{
    long long _allocateType;
    double _allocateTime;
    NSString *_allocateRequestID;
    NSString *_idsSessionID;
    NSString *_relaySessionID;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    NSData *_softwareData;
    unsigned char _protocolVersion;
    long long _relayServerProviderType;
    NSString *_reportingDataBlob;
    long long _participantID;
    NSArray *_allParticipantIDs;
    _Bool _isInitiator;
    long long _linkProtocol;
    struct sockaddr_storage _serverAddress;
    struct sockaddr_storage _serverAddressIPv6;
    NSString *_groupID;
    NSString *_stableGroupID;
    NSUUID *_defaultDeviceLocalCBUUID;
    NSUUID *_defaultDeviceRemoteCBUUID;
    NSArray *_publishedStreams;
    NSArray *_subscribedStreams;
    unsigned int _generationCounter;
    unsigned char _maxConcurrentStreams;
}

- (void).cxx_destruct;
@property(readonly) unsigned char maxConcurrentStreams; // @synthesize maxConcurrentStreams=_maxConcurrentStreams;
@property(readonly) unsigned int generationCounter; // @synthesize generationCounter=_generationCounter;
@property(readonly) NSArray *subscribedStreams; // @synthesize subscribedStreams=_subscribedStreams;
@property(readonly) NSArray *publishedStreams; // @synthesize publishedStreams=_publishedStreams;
@property(readonly) NSString *stableGroupID; // @synthesize stableGroupID=_stableGroupID;
@property(readonly) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly) NSUUID *defaultDeviceRemoteCBUUID; // @synthesize defaultDeviceRemoteCBUUID=_defaultDeviceRemoteCBUUID;
@property(readonly) NSUUID *defaultDeviceLocalCBUUID; // @synthesize defaultDeviceLocalCBUUID=_defaultDeviceLocalCBUUID;
@property(readonly) long long linkProtocol; // @synthesize linkProtocol=_linkProtocol;
@property(readonly) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly) NSArray *allParticipantIDs; // @synthesize allParticipantIDs=_allParticipantIDs;
@property(readonly) long long participantID; // @synthesize participantID=_participantID;
@property(readonly) NSString *reportingDataBlob; // @synthesize reportingDataBlob=_reportingDataBlob;
@property(readonly) long long relayServerProviderType; // @synthesize relayServerProviderType=_relayServerProviderType;
@property(readonly) unsigned char protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly) NSData *softwareData; // @synthesize softwareData=_softwareData;
@property(readonly) NSData *relaySessionKey; // @synthesize relaySessionKey=_relaySessionKey;
@property(readonly) NSData *relaySessionToken; // @synthesize relaySessionToken=_relaySessionToken;
@property(readonly) NSString *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(readonly) NSString *idsSessionID; // @synthesize idsSessionID=_idsSessionID;
@property(readonly) NSString *allocateRequestID; // @synthesize allocateRequestID=_allocateRequestID;
@property(readonly) double allocateTime; // @synthesize allocateTime=_allocateTime;
@property(readonly) long long allocateType; // @synthesize allocateType=_allocateType;
- (long long)parseSessionInfo:(id)arg1;
@property(readonly) const struct sockaddr_storage *serverAddressIPv6;
@property(readonly) const struct sockaddr_storage *serverAddress;

@end
