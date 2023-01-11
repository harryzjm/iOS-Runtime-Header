//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CKDDatabaseOperation
{
    long long _databaseScope;
}

@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (id)CKStatusReportProperties;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(CDUnknownBlockType)arg4;
- (id)flowControlKey;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;

@end

