//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSDate, NSMutableDictionary;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest
{
    _Bool _markZonesAsUserPurged;
    NSDate *_lastMissingManateeIdentityErrorDate;
    CDUnknownBlockType _recordZoneModifiedBlock;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZoneIDByRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) CDUnknownBlockType recordZoneModifiedBlock; // @synthesize recordZoneModifiedBlock=_recordZoneModifiedBlock;
@property(retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate; // @synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate;
@property(nonatomic) _Bool markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (_Bool)requiresCKAnonymousUserIDs;
- (id)initWithOperation:(id)arg1 recordZonesToSave:(id)arg2 recordZoneIDsToDelete:(id)arg3;

@end

