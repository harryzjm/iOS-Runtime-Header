//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, FCCKPrivateDatabase;
@protocol FCCKRecordZoneDelegate;

@interface FCCKRecordZone : NSObject
{
    _Bool _zoneReady;
    CKRecordZoneID *_recordZoneID;
    FCCKPrivateDatabase *_database;
    id <FCCKRecordZoneDelegate> _delegate;
}

- (void).cxx_destruct;
@property(getter=isZoneReady) _Bool zoneReady; // @synthesize zoneReady=_zoneReady;
@property(nonatomic) __weak id <FCCKRecordZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (id)description;
- (void)fetchChangesWithChangeToken:(id)arg1 desiredKeys:(id)arg2 fetchAllChanges:(_Bool)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)performActionWithRecordZone:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 delegate:(id)arg2 recordZoneID:(id)arg3;

@end
