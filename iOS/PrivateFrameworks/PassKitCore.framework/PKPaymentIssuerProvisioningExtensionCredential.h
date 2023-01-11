//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry;

@interface PKPaymentIssuerProvisioningExtensionCredential
{
    NSExtension *_extension;
    PKIssuerProvisioningExtensionPaymentPassEntry *_entry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKIssuerProvisioningExtensionPaymentPassEntry *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, copy, nonatomic) NSArray *metadata;
- (id)initWithExtension:(id)arg1 entry:(id)arg2;

@end
