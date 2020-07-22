//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICNoteVisibilityTesting-Protocol.h>

@class ICAccount, ICNote, NSArray, NSPredicate, NSString;
@protocol ICNoteVisibilityTesting;

@protocol ICNoteContainer <ICNoteVisibilityTesting>
@property(readonly, nonatomic) ICAccount *noteContainerAccount;
- (id <ICNoteVisibilityTesting>)noteVisibilityTestingForSearchingAccount;
- (_Bool)isDeleted;
- (_Bool)canBeSharedViaICloud;
- (NSPredicate *)predicateForPinnedNotes;
- (NSPredicate *)predicateForVisibleNotes;
- (_Bool)supportsEditingNotes;
- (NSString *)accountName;
- (NSString *)titleForTableViewCell;
- (NSString *)titleForNavigationBar;
- (unsigned long long)visibleNotesCount;
- (NSArray *)visibleNotes;
- (_Bool)noteIsVisible:(ICNote *)arg1;
@end
