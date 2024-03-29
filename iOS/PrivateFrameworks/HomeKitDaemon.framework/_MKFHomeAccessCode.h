//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeAccessCodeDatabaseID, NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _MKFHomeAccessCode
{
}

+ (id)backingModelProtocol;
+ (id)fetchRequest;
- (id)castIfHomeAccessCode;
@property(readonly, copy, nonatomic) MKFHomeAccessCodeDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;
- (id)fetchOtherGuestAccessCodesInHome:(id)arg1;
- (id)fetchOtherUserAccessCodesInHome:(id)arg1;
- (id)homeForHomeAccessCode:(id)arg1;
- (_Bool)validateAccessCodeForInsertOrUpdate:(id *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *accessCode; // @dynamic accessCode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

