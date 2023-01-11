//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/CRKCloudResetable-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken;

@interface CRKCloudFetchZoneChangesOperation <CRKCloudResetable>
{
    CKServerChangeToken *_serverToken;
    CKRecordZoneID *_zoneId;
}

@property(readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
@property(readonly, nonatomic) CKServerChangeToken *serverToken; // @synthesize serverToken=_serverToken;
- (void).cxx_destruct;
- (id)resetOperation;
- (void)main;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2 serverToken:(id)arg3;
- (id)initWithDatabase:(id)arg1;

@end

