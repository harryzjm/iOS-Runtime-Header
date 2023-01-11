//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, PKPaymentPass;

@interface PKPaymentRemoteCredential
{
    NSString *_identifier;
    long long _status;
    NSURL *_passURL;
    NSArray *_summaryMetadata;
    NSArray *_metadata;
    NSString *_summaryMetadataDescription;
    NSString *_statusDescription;
    NSString *_ownershipTokenIdentifier;
    PKPaymentPass *_paymentPass;
    unsigned long long _rank;
    NSString *_productIdentifier;
    NSString *_serialNumber;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(readonly, copy, nonatomic) NSString *summaryMetadataDescription; // @synthesize summaryMetadataDescription=_summaryMetadataDescription;
@property(readonly, copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSArray *summaryMetadata; // @synthesize summaryMetadata=_summaryMetadata;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)_isEqualToCredential:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
