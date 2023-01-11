//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPComponentParserDelegate-Protocol.h>

@class NSString;
@protocol TSUStreamReadChannel;

@interface TSPComponentReader <TSPComponentParserDelegate>
{
    id <TSUStreamReadChannel> _readChannel;
    struct {
        unsigned int isReadingFromDocument:1;
        unsigned int ignoreUnknownContent:1;
        unsigned int ignoreVersionChecking:1;
        unsigned int hasIncompatibleVersion:1;
        unsigned int acceptUnknownDocumentObject:1;
    } _flags;
}

- (void).cxx_destruct;
- (id)unknownObjectUnarchiverWithArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2 ignoreMessageData:(_Bool)arg3;
- (id)unknownMessageFromMessageInfo:(const struct MessageInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2;
- (const struct MessageInfo *)unknownObjectMessageInfo;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo *)arg2 message:(unique_ptr_1c88daa6 *)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(unique_ptr_375828ba)arg5 unknownContent:(id)arg6;
- (id)newUnarchiverWithArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2 isUnknownObject:(_Bool *)arg3;
- (_Bool)componentParser:(id)arg1 didReadArchiveInfo:(const struct ArchiveInfo *)arg2 stream:(struct DispatchDataInputStream *)arg3 error:(id *)arg4;
- (_Bool)shouldProceedParsingOnFailure;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4 ignoreUnknownContent:(_Bool)arg5 ignoreVersionChecking:(_Bool)arg6;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
