//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@protocol SyncErrorAnalyzing
- (_Bool)wasRecordAlreadySaved:(NSError *)arg1;
- (_Bool)wasRecordArchived:(NSError *)arg1;
- (_Bool)wasBatchFailure:(NSError *)arg1;
- (_Bool)wasTokenExpired:(NSError *)arg1;
- (long long)responseForError:(NSError *)arg1 attempt:(long long)arg2 retryInterval:(id *)arg3;
- (_Bool)wasQuotaExceededInError:(NSError *)arg1;
- (_Bool)wasOutOfSyncConditionsInError:(NSError *)arg1;
- (_Bool)wasZoneDeletedByUserInError:(NSError *)arg1;
- (_Bool)wasZoneNotCreated:(NSError *)arg1;
@end

