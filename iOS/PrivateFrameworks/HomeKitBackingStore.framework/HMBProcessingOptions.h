//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class HMFActivity, NSDictionary, NSString, NSUUID;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding>
{
    _Bool _enqueueExternalOutput;
    _Bool _performDelegateCallbacks;
    _Bool _rollbackIfUnpushedForMirror;
    NSString *_label;
    NSDictionary *_messagePayload;
    NSString *_messageName;
    CDUnknownBlockType _messageResponseHandler;
    NSUUID *_messageTransactionIdentifier;
    unsigned long long _changeSource;
    long long _qualityOfService;
    HMFActivity *_activity;
}

+ (id)optionsWithMessage:(id)arg1;
+ (id)optionsWithLabel:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) unsigned long long changeSource; // @synthesize changeSource=_changeSource;
@property(nonatomic) _Bool rollbackIfUnpushedForMirror; // @synthesize rollbackIfUnpushedForMirror=_rollbackIfUnpushedForMirror;
@property(nonatomic) _Bool performDelegateCallbacks; // @synthesize performDelegateCallbacks=_performDelegateCallbacks;
@property(nonatomic) _Bool enqueueExternalOutput; // @synthesize enqueueExternalOutput=_enqueueExternalOutput;
@property(retain, nonatomic) NSUUID *messageTransactionIdentifier; // @synthesize messageTransactionIdentifier=_messageTransactionIdentifier;
@property(copy, nonatomic) CDUnknownBlockType messageResponseHandler; // @synthesize messageResponseHandler=_messageResponseHandler;
@property(retain, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(retain, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)callMessageResponseHandlerWithPayload:(id)arg1 error:(id)arg2;
- (id)attributeDescriptions;
- (id)transactionIdentifier;
- (id)initWithLabel:(id)arg1;

@end
