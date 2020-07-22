//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class ABBufferQuery, NSMutableData;

@interface ABBufferQueryCursor : NSObject
{
    _Bool _hasFoundAnyImageDataForCurrentContact;
    int _currentMultivalueIdentifier;
    int _currentPropertyID;
    int _currentRecordID;
    int _multivaluePropertyIDColumn;
    int _multivalueIdentifierColumn;
    int _multivalueUUIDColumn;
    int _multivalueValueColumn;
    int _multivalueLabelColumn;
    int _multivalueEntryKeyColumn;
    int _multivalueEntryValueColumn;
    int _contactLinkUUIDColumn;
    int _contactPreferredForImageColumn;
    int _personLinkColumn;
    NSMutableData *_mutableData;
    struct sqlite3_blob *_incompleteBlob;
    unsigned long long _blobBytesWritten;
    unsigned long long _blobLength;
    long long _currentMultivalue;
    long long _resumeToken;
    unsigned long long _maxBufferSize;
    unsigned long long _maxContactsPerBatch;
    unsigned long long _countOfContactsInBuffer;
    ABBufferQuery *_query;
}

@property(nonatomic) int personLinkColumn; // @synthesize personLinkColumn=_personLinkColumn;
@property(nonatomic) int contactPreferredForImageColumn; // @synthesize contactPreferredForImageColumn=_contactPreferredForImageColumn;
@property(nonatomic) int contactLinkUUIDColumn; // @synthesize contactLinkUUIDColumn=_contactLinkUUIDColumn;
@property(nonatomic) int multivalueEntryValueColumn; // @synthesize multivalueEntryValueColumn=_multivalueEntryValueColumn;
@property(nonatomic) int multivalueEntryKeyColumn; // @synthesize multivalueEntryKeyColumn=_multivalueEntryKeyColumn;
@property(nonatomic) int multivalueLabelColumn; // @synthesize multivalueLabelColumn=_multivalueLabelColumn;
@property(nonatomic) int multivalueValueColumn; // @synthesize multivalueValueColumn=_multivalueValueColumn;
@property(nonatomic) int multivalueUUIDColumn; // @synthesize multivalueUUIDColumn=_multivalueUUIDColumn;
@property(nonatomic) int multivalueIdentifierColumn; // @synthesize multivalueIdentifierColumn=_multivalueIdentifierColumn;
@property(nonatomic) int multivaluePropertyIDColumn; // @synthesize multivaluePropertyIDColumn=_multivaluePropertyIDColumn;
@property(readonly, nonatomic) ABBufferQuery *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long countOfContactsInBuffer; // @synthesize countOfContactsInBuffer=_countOfContactsInBuffer;
@property(nonatomic) unsigned long long maxContactsPerBatch; // @synthesize maxContactsPerBatch=_maxContactsPerBatch;
@property(nonatomic) unsigned long long maxBufferSize; // @synthesize maxBufferSize=_maxBufferSize;
@property(nonatomic) int currentRecordID; // @synthesize currentRecordID=_currentRecordID;
@property(nonatomic) int currentPropertyID; // @synthesize currentPropertyID=_currentPropertyID;
@property(nonatomic) int currentMultivalueIdentifier; // @synthesize currentMultivalueIdentifier=_currentMultivalueIdentifier;
@property(nonatomic) long long resumeToken; // @synthesize resumeToken=_resumeToken;
@property(nonatomic) _Bool hasFoundAnyImageDataForCurrentContact; // @synthesize hasFoundAnyImageDataForCurrentContact=_hasFoundAnyImageDataForCurrentContact;
@property(nonatomic) long long currentMultivalue; // @synthesize currentMultivalue=_currentMultivalue;
@property(nonatomic) unsigned long long blobLength; // @synthesize blobLength=_blobLength;
@property(nonatomic) unsigned long long blobBytesWritten; // @synthesize blobBytesWritten=_blobBytesWritten;
@property(nonatomic) struct sqlite3_blob *incompleteBlob; // @synthesize incompleteBlob=_incompleteBlob;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
- (void)dealloc;
- (void)fetchNextBatchWithReply:(CDUnknownBlockType)arg1;
- (id)initWithQuery:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)initWithAddressBook:(void *)arg1 query:(id)arg2 queryBinder:(CDUnknownBlockType)arg3 propertyIdentifierSet:(struct __CFSet *)arg4 includeLinkedContacts:(_Bool)arg5 sortOrder:(unsigned int)arg6 suggestedContactsPerBatch:(unsigned long long)arg7;
- (id)initWithAddressBook:(void *)arg1 predicate:(id)arg2 propertyIdentifierSet:(struct __CFSet *)arg3 includeLinkedContacts:(_Bool)arg4 sortOrder:(unsigned int)arg5 suggestedContactsPerBatch:(unsigned long long)arg6;

@end

