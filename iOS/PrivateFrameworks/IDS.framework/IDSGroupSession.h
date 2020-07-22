//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _IDSGroupSession;

@interface IDSGroupSession : NSObject
{
    _IDSGroupSession *_internal;
}

- (void).cxx_destruct;
- (void)setPreferences:(id)arg1;
- (void)groupSessionParticipantsWithRequestID:(id)arg1;
- (void)leaveGroupSession;
- (void)joinGroupSession;
- (void)setParticipantInfo:(id)arg1;
- (void)updateMembers:(id)arg1 forGroupID:(id)arg2 isTriggeredLocally:(_Bool)arg3;
- (id)_internal;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
- (unsigned int)state;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSString *sessionID;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 options:(id)arg2;

@end

