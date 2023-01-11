//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DMFFetchDevicePropertiesRequest
{
    NSArray *_propertyKeys;
}

+ (id)devicePropertyKeysForPlatform:(unsigned long long)arg1;
+ (id)currentDevicePropertyKeys;
+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

