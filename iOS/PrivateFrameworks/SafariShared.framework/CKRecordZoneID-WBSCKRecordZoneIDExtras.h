//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordZoneID.h>

@class NSString;

@interface CKRecordZoneID (WBSCKRecordZoneIDExtras)
+ (id)safari_tabGroupSecondaryRecordZoneIDWithRootRecordName:(id)arg1;
+ (id)safari_tabGroupSecondaryRecordZoneNameWithRootRecordName:(id)arg1;
+ (id)safari_tabGroupsRecordZoneID;
+ (id)safari_bookmarksRecordZoneID;
@property(readonly, nonatomic) _Bool safari_isInPrivateDatabase;
@property(readonly, copy, nonatomic) NSString *safari_tabGroupRootRecordName;
@property(readonly, nonatomic) _Bool safari_isTabGroupSecondaryRecordZoneID;
@end

