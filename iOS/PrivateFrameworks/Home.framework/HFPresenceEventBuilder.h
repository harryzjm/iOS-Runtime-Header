//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFLocationEventBuilder-Protocol.h>

@class HFSelectedUserCollection, NSString;

@interface HFPresenceEventBuilder <HFLocationEventBuilder>
{
    HFSelectedUserCollection *_users;
    unsigned long long _eventType;
    unsigned long long _activationGranularity;
}

+ (id)_selectedUsersForPresenceEvent:(id)arg1;
@property(nonatomic) unsigned long long activationGranularity; // @synthesize activationGranularity=_activationGranularity;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) HFSelectedUserCollection *users; // @synthesize users=_users;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)buildNewEventFromCurrentState;
@property(readonly, nonatomic) unsigned long long presenceUserType;
@property(readonly, nonatomic) unsigned long long presenceEventType;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
