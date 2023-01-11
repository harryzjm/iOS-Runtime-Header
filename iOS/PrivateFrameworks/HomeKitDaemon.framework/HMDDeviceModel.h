//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeKitVersion, HMFProductInfo, NSArray, NSString, NSUUID;

@interface HMDDeviceModel
{
}

+ (id)properties;
- (_Bool)diff:(id)arg1 differingFields:(id *)arg2;
@property(readonly, nonatomic) NSArray *deviceHandles;

// Remaining properties
@property(retain, nonatomic) NSArray *handles; // @dynamic handles;
@property(retain, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) HMFProductInfo *productInfo; // @dynamic productInfo;
@property(retain, nonatomic) HMDHomeKitVersion *version; // @dynamic version;

@end

