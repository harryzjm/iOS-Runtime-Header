//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface IDSSocketPairResourceTransferReceiver : NSObject
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    _Bool _done;
    _Bool _isResuming;
    _Bool _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

+ (id)incomingFilePath;
+ (id)incomingFilePathForMessageUUID:(id)arg1;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
- (void).cxx_destruct;
- (id)finalizedMessageDictionaryIfDone;
- (_Bool)appendMessage:(id)arg1 receiverError:(unsigned char *)arg2;
- (_Bool)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2;
- (_Bool)writeResourceData:(id)arg1;
- (void)dealloc;
- (void)abortTransfer;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(_Bool)arg2 receiverError:(unsigned char *)arg3;

@end

