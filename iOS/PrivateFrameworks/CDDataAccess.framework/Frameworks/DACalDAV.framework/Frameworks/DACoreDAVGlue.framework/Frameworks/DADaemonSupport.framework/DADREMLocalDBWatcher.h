//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject
{
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;
- (void).cxx_destruct;
- (void)remindersDatabaseDidChange;
- (void)removeConcernedRemindersParty:(id)arg1;
- (void)registerConcernedRemindersParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
