//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject
{
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_ssid;
    NSString *_macAddress;
    unsigned long long _properties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithAirPortAssistantWACDevice:(id)arg1;

@end
