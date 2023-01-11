//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EMMailboxScope, NSPredicate;

@interface EMSmartMailbox
{
    NSPredicate *_predicate;
    EMMailboxScope *_mailboxScope;
    long long _smartMailboxType;
}

+ (id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 additionalPredicate:(id)arg3;
+ (id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2;
+ (id)includesMeMailboxWithMailboxScope:(id)arg1;
+ (id)muteThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)todayMailboxWithMailboxScope:(id)arg1;
+ (id)notifyThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)hasAttachmentsMailboxWithMailboxScope:(id)arg1;
+ (id)unreadMailboxWithMailboxScope:(id)arg1;
+ (id)flaggedMailboxWithMailboxScope:(id)arg1;
+ (id)vipMailboxWithMailboxScope:(id)arg1;
@property(readonly, nonatomic) long long smartMailboxType; // @synthesize smartMailboxType=_smartMailboxType;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)supportsSelectAll;
- (_Bool)isSmartMailbox;
- (id)initWithType:(long long)arg1 mailboxType:(long long)arg2 name:(id)arg3 predicate:(id)arg4 mailboxScope:(id)arg5;

@end
