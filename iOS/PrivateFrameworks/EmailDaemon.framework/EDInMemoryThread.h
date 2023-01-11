//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@class EFQuery, EMMessage, EMThread, EMThreadScope, NSArray, NSMutableArray;
@protocol EMMailboxTypeResolver;

@interface EDInMemoryThread : NSObject <NSCopying>
{
    NSMutableArray *_messages;
    NSMutableArray *_dateSortedMessages;
    EMThread *_thread;
    EMThreadScope *_threadScope;
    EFQuery *_originatingQuery;
    id <EMMailboxTypeResolver> _mailboxTypeResolver;
    EMMessage *_displayMessage;
}

+ (id)_dateSortDescriptors;
@property(retain, nonatomic) EMMessage *displayMessage; // @synthesize displayMessage=_displayMessage;
@property(readonly, nonatomic) id <EMMailboxTypeResolver> mailboxTypeResolver; // @synthesize mailboxTypeResolver=_mailboxTypeResolver;
@property(readonly, nonatomic) EFQuery *originatingQuery; // @synthesize originatingQuery=_originatingQuery;
@property(readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
@property(retain, nonatomic) EMThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (id)_dateSortedMessages;
- (void)_recalculateDisplayMessage;
- (id)_combinedMailboxes;
- (_Bool)_combinedHasAttachments;
- (_Bool)_combinedIsBlocked;
- (_Bool)_combinedIsVIP;
- (id)_combinedFlagColors;
- (_Bool)_combinedHasUnflagged;
- (id)_combinedFlags;
- (id)_combinedCCList;
- (id)_combinedToList;
- (id)_combinedSenderList;
- (_Bool)_isSortedByDate:(id)arg1;
- (id)_calculateAndApplyChange;
- (id)_calculateChangesAfterRemovingMessages:(id)arg1 applyingChanges:(id)arg2 threadIsEmpty:(_Bool *)arg3;
- (id)updateMessage:(id)arg1 fromOldObjectID:(id)arg2;
- (id)removeMessages:(id)arg1 threadIsEmpty:(_Bool *)arg2;
- (id)changeMessages:(id)arg1 forKeyPaths:(id)arg2 threadIsEmpty:(_Bool *)arg3;
- (void)_addMessagesToThread:(id)arg1;
- (id)addMessages:(id)arg1;
@property(readonly, nonatomic) EMMessage *newestMessage;
@property(readonly, copy, nonatomic) NSArray *messages;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_createThreadWithObjectID:(id)arg1;
- (id)initWithMessages:(id)arg1 originatingQuery:(id)arg2 mailboxTypeResolver:(id)arg3;

@end
