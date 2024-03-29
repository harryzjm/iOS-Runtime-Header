//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMSyncErrorAnalyzer.h>

@interface IMSyncErrorAnalyzer (SyncErrorAnalyzing)
- (_Bool)wasRecordAlreadySaved:(id)arg1;
- (_Bool)wasRecordArchived:(id)arg1;
- (_Bool)wasBatchFailure:(id)arg1;
- (_Bool)wasTokenExpired:(id)arg1;
- (_Bool)wasZoneNotCreated:(id)arg1;
- (_Bool)wasZoneDeletedByUserInError:(id)arg1;
- (_Bool)wasQuotaExceededInError:(id)arg1;
- (_Bool)wasOutOfSyncConditionsInError:(id)arg1;
@end

