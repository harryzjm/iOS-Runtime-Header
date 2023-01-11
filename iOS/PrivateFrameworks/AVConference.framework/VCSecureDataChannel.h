//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCTransport;
@protocol VCSecureDataChannelDelegate;

__attribute__((visibility("hidden")))
@interface VCSecureDataChannel : NSObject
{
    unsigned int _localCallID;
    unsigned int _remoteCallID;
    struct _tls_record_s *tlsRecord;
    id _delegate;
    VCTransport *_transport;
    unsigned long long _maxUDPPayloadSize;
}

@property(nonatomic) unsigned long long maxUDPPayloadSize; // @synthesize maxUDPPayloadSize=_maxUDPPayloadSize;
@property(readonly, nonatomic) long long maxUnencryptedDataSize;
@property(readonly, nonatomic) long long maxEncryptedDataSize;
@property(nonatomic) id <VCSecureDataChannelDelegate> delegate;
- (int)convertData:(id)arg1 toEncryptedData:(id *)arg2 encrypted:(_Bool)arg3;
- (int)convertEncryptedData:(id)arg1 toData:(id *)arg2 encrypted:(_Bool)arg3;
- (int)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(_Bool)arg3;
- (int)setupWithSharedSecret:(id)arg1 isCaller:(_Bool)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithLocalCallID:(unsigned int)arg1 remoteCallID:(unsigned int)arg2 isCaller:(_Bool)arg3 sharedSecret:(id)arg4 error:(id *)arg5;

@end

