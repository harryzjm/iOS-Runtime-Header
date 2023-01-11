//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface NPKPaymentBarcode : NSObject
{
    NSString *_barcodeIdentifier;
    unsigned long long _state;
    NSData *_decryptedBarcodeCredential;
    NSArray *_barcodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *barcodes; // @synthesize barcodes=_barcodes;
@property(retain, nonatomic) NSData *decryptedBarcodeCredential; // @synthesize decryptedBarcodeCredential=_decryptedBarcodeCredential;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *barcodeIdentifier; // @synthesize barcodeIdentifier=_barcodeIdentifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBarcodeIdentifier:(id)arg1 decryptedBarcodeCredential:(id)arg2 error:(id)arg3;

@end
