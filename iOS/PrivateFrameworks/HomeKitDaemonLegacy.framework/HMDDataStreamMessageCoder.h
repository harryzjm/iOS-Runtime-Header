//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDDataStreamMessageCoder : NSObject
{
}

+ (id)responseHeaderForRequestHeader:(id)arg1 status:(unsigned short)arg2;
+ (id)requestHeaderForProtocol:(id)arg1 topic:(id)arg2 identifier:(id)arg3;
+ (id)eventHeaderForProtocol:(id)arg1 topic:(id)arg2;
+ (_Bool)readHeaderFromPartialData:(const char *)arg1 length:(unsigned long long)arg2 frameType:(unsigned char *)arg3 payloadLength:(unsigned long long *)arg4;
+ (_Bool)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char *)arg2 payloadLength:(unsigned long long *)arg3;
+ (id)buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;
+ (_Bool)unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;
+ (id)encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id *)arg4;
+ (_Bool)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id *)arg3 receivedPayload:(id *)arg4 error:(id *)arg5;
+ (id)_buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;
+ (id)_encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id *)arg4;
+ (id)_encodeOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;
+ (_Bool)_unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;
+ (_Bool)_decodeOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;
+ (_Bool)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id *)arg3 receivedPayload:(id *)arg4 error:(id *)arg5;

@end

