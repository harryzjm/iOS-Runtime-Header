//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageLogEvent : HMMLogEvent
{
    _Bool _sending;
    _Bool _secure;
    int _transportType;
    NSString *_msgIdentifier;
    NSString *_transactionIdentifier;
    NSString *_msgName;
    long long _msgType;
    NSString *_peerInformation;
    long long _msgQoS;
}

+ (id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)sendingRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(_Bool)arg6 transportType:(int)arg7 messageQoS:(long long)arg8;
+ (id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)receivedRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(_Bool)arg6 transportType:(int)arg7 messageQoS:(long long)arg8;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long msgQoS; // @synthesize msgQoS=_msgQoS;
@property(readonly, nonatomic) NSString *peerInformation; // @synthesize peerInformation=_peerInformation;
@property(readonly, nonatomic) long long msgType; // @synthesize msgType=_msgType;
@property(readonly, nonatomic) NSString *msgName; // @synthesize msgName=_msgName;
@property(readonly, nonatomic) _Bool secure; // @synthesize secure=_secure;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, copy, nonatomic) NSString *msgIdentifier; // @synthesize msgIdentifier=_msgIdentifier;
@property(readonly, nonatomic) _Bool sending; // @synthesize sending=_sending;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (id)initWithRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(_Bool)arg6 transportType:(int)arg7 sending:(_Bool)arg8 messageQoS:(long long)arg9;

@end

