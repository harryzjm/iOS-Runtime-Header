//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Notes/NoteStoreObject.h>

#import <NotesUI/ICLegacyFolder-Protocol.h>

@class NSString;

@interface NoteStoreObject (ICLegacyFolder) <ICLegacyFolder>
- (void)addNotesObject:(id)arg1;
- (id)newNoteInContext:(struct NoteContext *)arg1;
- (id)parentFolder;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
