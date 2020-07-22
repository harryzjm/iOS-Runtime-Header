//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLEControlOutputStream, HAPBTLETransactionIdentifier, HAPCharacteristic, HAPService, HMFBlockOperation, HMFTimer, NSData;

@interface HAPBTLERequest : HMFObject
{
    unsigned char _type;
    _Bool _encrypted;
    _Bool _finished;
    HAPBTLETransactionIdentifier *_identifier;
    HAPService *_service;
    HAPCharacteristic *_characteristic;
    NSData *_body;
    double _timeoutInterval;
    HMFBlockOperation *_operation;
    HAPBTLEControlOutputStream *_controlOutputStream;
    HMFTimer *_responseTimer;
}

@property(retain, nonatomic) HMFTimer *responseTimer; // @synthesize responseTimer=_responseTimer;
@property(retain, nonatomic) HAPBTLEControlOutputStream *controlOutputStream; // @synthesize controlOutputStream=_controlOutputStream;
@property(nonatomic) __weak HMFBlockOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) HAPService *service; // @synthesize service=_service;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) HAPBTLETransactionIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_serializeHeader;
- (id)serialize;
- (void)cancelWithError:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(_Bool)arg4 timeoutInterval:(double)arg5;
- (id)init;

@end

