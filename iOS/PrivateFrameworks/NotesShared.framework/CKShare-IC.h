//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShare.h>

@class NSArray;

@interface CKShare (IC)
- (unsigned long long)_nonOwnerParticipantsCountWithAcceptanceStatus:(long long)arg1;
- (unsigned long long)_nonCurrentUserParticipantsCountWithAcceptanceStatus:(long long)arg1;
- (id)ic_participantWithUserRecordName:(id)arg1;
@property(readonly, nonatomic) _Bool ic_isPublicShare;
@property(readonly, nonatomic) NSArray *ic_nonCurrentUserAcceptedParticipants;
@property(readonly, nonatomic) NSArray *ic_acceptedParticipants;
@property(readonly, nonatomic) NSArray *ic_nonCurrentUserParticipants;
@property(readonly, nonatomic) unsigned long long ic_nonOwnerPendingParticipantsCount;
@property(readonly, nonatomic) unsigned long long ic_nonOwnerAcceptedParticipantsCount;
@property(readonly, nonatomic) unsigned long long ic_nonOwnerInvitedParticipantsCount;
@end

