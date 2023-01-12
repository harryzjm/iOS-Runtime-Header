//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FMDExtAccessoryInfo : NSObject <NSSecureCoding>
{
    NSString *_accessoryIdentifier;
    NSString *_accessoryType;
    NSString *_name;
    NSDictionary *_serialNumbers;
    NSString *_firmwareVersion;
    NSString *_deviceDiscoveryId;
    NSDictionary *_additionalInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(retain, nonatomic) NSString *deviceDiscoveryId; // @synthesize deviceDiscoveryId=_deviceDiscoveryId;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) NSDictionary *serialNumbers; // @synthesize serialNumbers=_serialNumbers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
