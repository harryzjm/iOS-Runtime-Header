//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;
@protocol MSPSenderMessageStrategyDelegate;

__attribute__((visibility("hidden")))
@interface MSPSenderMessageStrategy
{
    id <MSPSenderMessageStrategyDelegate> _delegate;
    NSMutableSet *_messagesParticipants;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *messagesParticipants; // @synthesize messagesParticipants=_messagesParticipants;
@property(nonatomic) __weak id <MSPSenderMessageStrategyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendMessageIfNeeded;
- (id)participants;
- (void)removeParticipants:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_removeMessagesParticipants:(id)arg1;
- (void)_addMessagesParticipants:(id)arg1;
- (void)setState:(id)arg1;

@end

