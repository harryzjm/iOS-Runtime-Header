//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

#import <NotesShared/ICHasDatabaseScope-Protocol.h>

@class NSString;

@interface CKRecordID (IC) <ICHasDatabaseScope>
- (_Bool)ic_isOwnedByCurrentUser;
- (long long)databaseScope;
- (id)ic_loggingDescription;
- (id)ic_loggingDescriptionIncludingBrackets:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
