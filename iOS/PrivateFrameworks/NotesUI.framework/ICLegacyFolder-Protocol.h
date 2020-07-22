//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;
@protocol ICLegacyAccount, ICLegacyFolder, ICLegacyNote;

@protocol ICLegacyFolder <NSObject>
- (NSManagedObjectContext *)managedObjectContext;
- (NSManagedObjectID *)objectID;
- (void)addNotesObject:(id <ICLegacyNote>)arg1;
- (id <ICLegacyNote>)newNoteInContext:(struct NoteContext *)arg1;
- (NSSet *)changes;
- (id <ICLegacyFolder>)parentFolder;
- (NSString *)title;
- (NSString *)name;
- (id <ICLegacyAccount>)account;
@end

