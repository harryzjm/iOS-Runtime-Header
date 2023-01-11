//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile, NSNumber;

@interface HDDeviceManager : NSObject
{
    HDProfile *_profile;
    HDDatabaseValueCache *_devicesByPersistentID;
    HDDatabaseValueCache *_deviceEntitiesByDevice;
    NSNumber *_noneDeviceID;
}

@property(copy) NSNumber *noneDeviceID; // @synthesize noneDeviceID=_noneDeviceID;
@property(retain, nonatomic) HDDatabaseValueCache *deviceEntitiesByDevice; // @synthesize deviceEntitiesByDevice=_deviceEntitiesByDevice;
@property(retain, nonatomic) HDDatabaseValueCache *devicesByPersistentID; // @synthesize devicesByPersistentID=_devicesByPersistentID;
- (void).cxx_destruct;
- (id)allDeviceEntitiesWithError:(id *)arg1;
- (id)_noneDevice;
- (id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)deviceEntitiesForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceEntityForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)currentDeviceEntityWithError:(id *)arg1;
- (id)deviceEntityForNoDeviceWithError:(id *)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end

