//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol FCContentContext;

@interface FCDraftIssuesFetchOperation
{
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    NSString *_issueListID;
    NSArray *_resultIssues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *resultIssues; // @synthesize resultIssues=_resultIssues;
@property(retain, nonatomic) NSString *issueListID; // @synthesize issueListID=_issueListID;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 issueListID:(id)arg2;
- (id)init;

@end
