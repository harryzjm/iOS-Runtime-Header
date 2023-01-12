//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/NSXMLParserDelegate-Protocol.h>

@class ICEvernoteNote, ICEvernoteResource, NSError, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICEvernoteNoteParser : NSObject <NSXMLParserDelegate>
{
    _Bool _shouldCountOnly;
    _Bool _shouldIgnoreCurrentNote;
    unsigned long long _noteCount;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSObject<OS_dispatch_semaphore> *_parseSemaphore;
    NSError *_parseError;
    NSMutableString *_bufferString;
    long long _contentLevel;
    NSMutableString *_contentString;
    NSMutableArray *_notes;
    ICEvernoteNote *_currentNote;
    ICEvernoteResource *_currentResource;
    NSURL *_currentImportDirectory;
    NSMutableDictionary *_currentImportItem;
    NSMutableArray *_importItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *importItems; // @synthesize importItems=_importItems;
@property(retain, nonatomic) NSMutableDictionary *currentImportItem; // @synthesize currentImportItem=_currentImportItem;
@property(retain, nonatomic) NSURL *currentImportDirectory; // @synthesize currentImportDirectory=_currentImportDirectory;
@property(retain, nonatomic) ICEvernoteResource *currentResource; // @synthesize currentResource=_currentResource;
@property(retain, nonatomic) ICEvernoteNote *currentNote; // @synthesize currentNote=_currentNote;
@property(retain, nonatomic) NSMutableArray *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSMutableString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) long long contentLevel; // @synthesize contentLevel=_contentLevel;
@property(retain, nonatomic) NSMutableString *bufferString; // @synthesize bufferString=_bufferString;
@property(retain, nonatomic) NSError *parseError; // @synthesize parseError=_parseError;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *parseSemaphore; // @synthesize parseSemaphore=_parseSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // @synthesize parseQueue=_parseQueue;
@property(nonatomic) unsigned long long noteCount; // @synthesize noteCount=_noteCount;
@property(nonatomic) _Bool shouldIgnoreCurrentNote; // @synthesize shouldIgnoreCurrentNote=_shouldIgnoreCurrentNote;
@property(nonatomic) _Bool shouldCountOnly; // @synthesize shouldCountOnly=_shouldCountOnly;
- (id)dateFromDateString:(id)arg1;
- (id)importDirectoryURLWithImportIdentifier:(id)arg1;
- (void)archiveEvernoteResource:(id)arg1;
- (void)archiveEvernoteNote:(id)arg1;
- (void)parseFileAtBookmarkData:(id)arg1 shouldCountOnly:(_Bool)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)cleanupArchiveId:(id)arg1;
- (id)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2;
- (id)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2;
- (id)archiveItemsFromBookmarkData:(id)arg1 error:(id *)arg2;
- (unsigned long long)countEvernoteNotesFromBookmarkData:(id)arg1;
@property(readonly, nonatomic) NSURL *importDirectory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
