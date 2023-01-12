//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSArray, NSData, NSString;

@interface CBControllerInfo : NSObject <CUXPCCodable>
{
    BOOL _hciTransportType;
    unsigned char _lmpVersion;
    unsigned char _vendorIDSource;
    unsigned short _vendorID;
    int _discoverableState;
    int _inquiryState;
    unsigned int _productID;
    unsigned int _supportedServices;
    NSArray *_audioLinkQualityArray;
    long long _bluetoothState;
    NSString *_chipsetID;
    NSString *_firmwareName;
    NSString *_firmwareVersion;
    NSData *_hardwareAddressData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char vendorIDSource; // @synthesize vendorIDSource=_vendorIDSource;
@property(nonatomic) unsigned short vendorID; // @synthesize vendorID=_vendorID;
@property(nonatomic) unsigned int supportedServices; // @synthesize supportedServices=_supportedServices;
@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(nonatomic) unsigned char lmpVersion; // @synthesize lmpVersion=_lmpVersion;
@property(nonatomic) int inquiryState; // @synthesize inquiryState=_inquiryState;
@property(nonatomic) BOOL hciTransportType; // @synthesize hciTransportType=_hciTransportType;
@property(copy, nonatomic) NSData *hardwareAddressData; // @synthesize hardwareAddressData=_hardwareAddressData;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *firmwareName; // @synthesize firmwareName=_firmwareName;
@property(nonatomic) int discoverableState; // @synthesize discoverableState=_discoverableState;
@property(copy, nonatomic) NSString *chipsetID; // @synthesize chipsetID=_chipsetID;
@property(nonatomic) long long bluetoothState; // @synthesize bluetoothState=_bluetoothState;
@property(copy, nonatomic) NSArray *audioLinkQualityArray; // @synthesize audioLinkQualityArray=_audioLinkQualityArray;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end
