//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMArchiveManager, CMMapper, CMState, NSString, OCDDocument;

__attribute__((visibility("hidden")))
@interface QLTop : NSObject
{
    CMMapper *_mapper;
    CMState *_state;
    CMArchiveManager *_archiver;
    OCDDocument *_document;
    NSString *_fileName;
    unsigned long long _format;
    _Bool _forIndexing;
}

+ (_Bool)supportsProgressiveMapping;
+ (void)fillHTMLArchiveForOfficeData:(id)arg1 fileName:(id)arg2 dataFormat:(unsigned long long)arg3 archiver:(id)arg4;
+ (id)searchableAttributesForBinaryOfficeFileAtURL:(id)arg1 error:(id *)arg2;
+ (id)metadataForBinaryOfficeFileAtURL:(id)arg1 error:(id *)arg2;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 dataFormat:(unsigned long long)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 dataFormat:(unsigned long long)arg4 archiver:(id)arg5;
- (void).cxx_destruct;
@property _Bool forIndexing; // @synthesize forIndexing=_forIndexing;
@property(readonly) CMState *state; // @synthesize state=_state;
@property(readonly) CMMapper *mapper; // @synthesize mapper=_mapper;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(_Bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
- (id)documentWithFile:(id)arg1 orData:(id)arg2 isXML:(_Bool)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;
- (void)setupMappingStateWithDocument:(id)arg1;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(_Bool)arg1;
- (Class)stateClass;
- (void)initializeClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

