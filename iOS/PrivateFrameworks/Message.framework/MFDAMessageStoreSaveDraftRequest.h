//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccess/DADraftMessageRequest.h>

#import <Message/MFDAMailAccountRequest-Protocol.h>

@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest>
{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

- (id)deferredOperation;
@property(readonly, nonatomic) _Bool isUserRequested;
@property(readonly, nonatomic) _Bool shouldSend;
- (unsigned long long)generationNumber;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 mailbox:(id)arg2;

@end
