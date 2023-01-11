//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VMVoicemailManager;

@interface VMAccount : NSObject
{
    VMVoicemailManager *_voicemailManager;
}

@property(retain, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;
- (void).cxx_destruct;
- (id)allVoicemailsWithFlags:(unsigned long long)arg1 withoutFlags:(unsigned long long)arg2;
- (void)moveVoicemailFromTrash:(id)arg1;
- (void)moveVoicemailToTrash:(id)arg1;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (_Bool)isSubscribed;
- (void)setProvisionalPassword:(id)arg1;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)synchronize:(_Bool)arg1;
- (_Bool)greetingAvailable;
- (int)mailboxUsage;
- (_Bool)isOfflineDueToRoaming;
- (_Bool)isOnline;
- (_Bool)mailboxRequiresSetup;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (_Bool)isMessageWaiting;
- (unsigned int)recentUnreadCount;
- (unsigned int)unreadCount;
- (id)init;

@end

