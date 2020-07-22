//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CKDVolume : NSObject
{
    NSUUID *_volumeUUID;
    NSNumber *_deviceID;
    NSString *_mountToPath;
}

@property(retain, nonatomic) NSString *mountToPath; // @synthesize mountToPath=_mountToPath;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSUUID *volumeUUID; // @synthesize volumeUUID=_volumeUUID;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3;

@end

