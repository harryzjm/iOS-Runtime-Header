//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPeerPaymentRecipientRequest
{
    NSString *_recipientAddress;
    NSString *_senderAddress;
    unsigned long long _recipientAddressSource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long recipientAddressSource; // @synthesize recipientAddressSource=_recipientAddressSource;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *recipientAddress; // @synthesize recipientAddress=_recipientAddress;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3;

@end
