//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class IDSDestination, IDSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSSendParameters : NSObject <NSCopying>
{
    NSMutableDictionary *_params;
    IDSOutgoingMessageCheckpointTrace *_checkpointTrace;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(nonatomic) _Bool ignoreMaxRetryCount;
@property(nonatomic) _Bool sessionForceInternetInvitation;
@property(nonatomic) _Bool liveMessageDelivery;
@property(nonatomic) _Bool disallowRefresh;
@property(nonatomic) _Bool alwaysSkipSelf;
@property(nonatomic) _Bool allowCloudDelivery;
@property(nonatomic) _Bool forceEncryptionOff;
@property(nonatomic) _Bool disableAliasValidation;
@property(nonatomic) _Bool homeKitPayload;
@property(nonatomic) _Bool enforceRemoteTimeouts;
@property(nonatomic) _Bool isProxiedOutgoingMessage;
@property(nonatomic) _Bool fireAndForget;
@property(nonatomic) _Bool bypassSizeCheck;
@property(nonatomic) _Bool daemonDeathResend;
@property(nonatomic) _Bool nonCloudWaking;
@property(nonatomic) _Bool nonWaking;
@property(nonatomic) _Bool activityContinuation;
@property(nonatomic) _Bool bypassStorage;
@property(nonatomic) _Bool fakeMessage;
@property(nonatomic) _Bool bypassDuet;
@property(nonatomic) double timeout;
@property(nonatomic) _Bool requireLocalWiFi;
@property(nonatomic) _Bool requireBluetooth;
@property(nonatomic) _Bool localDelivery;
@property(nonatomic) long long priority;
@property(nonatomic) _Bool wantsCertifiedDelivery;
@property(nonatomic) _Bool wantsDeliveryStatus;
@property(nonatomic) _Bool wantsProgress;
@property(nonatomic) _Bool wantsResponse;
@property(nonatomic) _Bool compressPayload;
@property(nonatomic) _Bool encryptPayload;
@property(nonatomic) _Bool wantsAppAck;
@property(nonatomic) _Bool useDictAsTopLevel;
@property(nonatomic) _Bool compressed;
@property(nonatomic) _Bool expectsPeerResponse;
@property(retain, nonatomic) NSNumber *pushPriority;
@property(retain, nonatomic) NSNumber *originalTimestamp;
@property(retain, nonatomic) NSNumber *dropMessageIndicatorCommand;
@property(retain, nonatomic) NSString *metricReportIdentifier;
@property(retain, nonatomic) NSData *groupData;
@property(retain, nonatomic) NSString *sessionID;
@property(retain, nonatomic) NSNumber *messageType;
@property(retain, nonatomic) NSString *localDestinationDeviceUUID;
@property(retain, nonatomic) NSString *originalfromID;
@property(retain, nonatomic) NSString *mainAccountUUID;
@property(retain, nonatomic) NSString *subServiceAccountUUID;
@property(retain, nonatomic) NSString *subService;
@property(retain, nonatomic) NSData *accessToken;
@property(retain, nonatomic) NSArray *duetIdentifiersOverride;
@property(retain, nonatomic) NSString *queueOneIdentifier;
@property(retain, nonatomic) NSArray *interestingRegistrationProperties;
@property(retain, nonatomic) NSArray *requireLackOfRegistrationProperties;
@property(retain, nonatomic) NSArray *requireAllRegistrationProperties;
@property(retain, nonatomic) NSString *peerResponseIdentifier;
@property(retain, nonatomic) NSArray *bulkedPayload;
@property(retain, nonatomic) NSString *alternateCallbackID;
@property(retain, nonatomic) NSData *messageUUID;
@property(retain, nonatomic) NSDictionary *deliveryStatusContext;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSNumber *commandContext;
@property(retain, nonatomic) NSNumber *command;
@property(retain, nonatomic) NSData *dataToEncrypt;
@property(retain, nonatomic) NSString *accountUUID;
@property(retain, nonatomic) NSArray *finalDestinations;
@property(retain, nonatomic) IDSDestination *destinations;
@property(retain, nonatomic) NSString *fromID;
@property(retain, nonatomic) NSDictionary *resourceMetadata;
@property(retain, nonatomic) NSString *resourcePath;
@property(retain, nonatomic) NSDictionary *protobuf;
@property(retain, nonatomic) NSDictionary *message;
@property(retain, nonatomic) NSData *data;
@property(retain, nonatomic) IDSOutgoingMessageCheckpointTrace *checkpointTrace; // @synthesize checkpointTrace=_checkpointTrace;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)dictionaryRepresentationIncludingTrace:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
