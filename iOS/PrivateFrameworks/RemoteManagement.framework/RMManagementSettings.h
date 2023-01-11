//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, RMUser;

@interface RMManagementSettings : NSManagedObject
{
}

+ (id)fetchRequestMatchingManagementSettingsForLocalUserAndDeviceForOrganization:(id)arg1;
+ (id)fetchManagementSettingsForLocalUserForOrganization:(id)arg1;
@property(nonatomic) _Bool isContentAndPrivacyEnabled; // @dynamic isContentAndPrivacyEnabled;
@property(nonatomic) _Bool isScreenTimeEnabled; // @dynamic isScreenTimeEnabled;

// Remaining properties
@property(nonatomic) _Bool isContentAndPrivacyCloudSyncEnabled; // @dynamic isContentAndPrivacyCloudSyncEnabled;
@property(nonatomic) _Bool isPreviouslyEnabled; // @dynamic isPreviouslyEnabled;
@property(nonatomic) _Bool isScreenTimeCloudSyncEnabled; // @dynamic isScreenTimeCloudSyncEnabled;
@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
@property(retain, nonatomic) RMUser *user; // @dynamic user;
@property(retain, nonatomic) NSSet *userDevicePairs; // @dynamic userDevicePairs;

@end
