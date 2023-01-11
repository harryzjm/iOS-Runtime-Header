//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentHistoryToken, PLJournalEntryHeader;
@protocol PLJournalEntryPayload, PLJournalEntryPayloadID;

@interface PLJournalEntry : NSObject
{
    id <PLJournalEntryPayloadID> _payloadID;
    id <PLJournalEntryPayload> _payload;
    PLJournalEntryHeader *_header;
    NSPersistentHistoryToken *_historyToken;
}

@property(retain, nonatomic) NSPersistentHistoryToken *historyToken; // @synthesize historyToken=_historyToken;
@property(retain, nonatomic) PLJournalEntryHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) id <PLJournalEntryPayload> payload; // @synthesize payload=_payload;
@property(retain, nonatomic) id <PLJournalEntryPayloadID> payloadID; // @synthesize payloadID=_payloadID;
- (void).cxx_destruct;
- (id)descriptionWithBuilder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (_Bool)writeToFileHandle:(id)arg1 error:(id *)arg2;
- (void)appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4;
- (void)_appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4;
- (_Bool)readFromFileHandle:(id)arg1 decodePayload:(_Bool)arg2 payloadClass:(Class)arg3 entryOffset:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)_readFromFileHandle:(id)arg1 decodePayload:(_Bool)arg2 payloadClass:(Class)arg3 error:(id *)arg4;
- (unsigned long long)entryType;
@property(nonatomic) unsigned int payloadVersion;
- (id)initForDeleteWithPayloadID:(id)arg1;
- (id)initForUpdateWithPayload:(id)arg1;
- (id)initForInsertWithPayload:(id)arg1;
- (id)initWithPayloadID:(id)arg1 payload:(id)arg2 entryType:(int)arg3;
- (id)init;

@end
