//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class CKShareMetadata, NSString;

__attribute__((visibility("hidden")))
@interface BRCAcceptShareOperation : _BRCOperation
{
    CKShareMetadata *_shareMetadata;
    CDUnknownBlockType _acceptShareCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType acceptShareCompletionBlock; // @synthesize acceptShareCompletionBlock=_acceptShareCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)main;
- (id)initWithShareMetadata:(id)arg1 syncContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

