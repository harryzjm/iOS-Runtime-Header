//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSCopying-Protocol.h>
#import <IDS/NSSecureCoding-Protocol.h>

@class NSString;
@protocol OS_nw_endpoint, OS_nw_parameters;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding, NSCopying>
{
    int _socket;
    NSString *_groupSessionID;
    unsigned long long _localParticipantID;
    unsigned long long _remoteParticipantID;
    unsigned long long _connectionIndex;
    long long _dataMode;
    NSObject<OS_nw_parameters> *_parameters;
    NSObject<OS_nw_endpoint> *_endpoint;
}

+ (_Bool)supportsSecureCoding;
+ (id)realTimeContext;
- (void).cxx_destruct;
@property int socket; // @synthesize socket=_socket;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(readonly, nonatomic) unsigned long long connectionIndex; // @synthesize connectionIndex=_connectionIndex;
@property(readonly, nonatomic) unsigned long long remoteParticipantID; // @synthesize remoteParticipantID=_remoteParticipantID;
@property(readonly, nonatomic) unsigned long long localParticipantID; // @synthesize localParticipantID=_localParticipantID;
@property(readonly, nonatomic) NSString *groupSessionID; // @synthesize groupSessionID=_groupSessionID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_setUpNWConnectionforTesting:(CDUnknownBlockType)arg1;
- (void)_requestNWConnectionforIDSGroupSessionUnicastParameter:(CDUnknownBlockType)arg1;
- (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(CDUnknownBlockType)arg1;
- (id)initWithConnectedSocket:(int)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3;
- (id)initWithGroupSessionID:(id)arg1 localParticipantID:(unsigned long long)arg2 remoteParticipantID:(unsigned long long)arg3 dataMode:(long long)arg4 connectionIndex:(unsigned long long)arg5;

@end
