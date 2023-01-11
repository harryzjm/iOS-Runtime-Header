//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSSet;
@protocol FCContentContext;

@interface FCCheckDraftContentAccessOperation
{
    id <FCContentContext> _context;
    NSArray *_channelMemberships;
    NSSet *_issueIDs;
    NSSet *_articleIDs;
    CDUnknownBlockType _checkAccessCompletion;
    NSDictionary *_resultAccessByContentID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *resultAccessByContentID; // @synthesize resultAccessByContentID=_resultAccessByContentID;
@property(copy, nonatomic) CDUnknownBlockType checkAccessCompletion; // @synthesize checkAccessCompletion=_checkAccessCompletion;
@property(copy, nonatomic) NSSet *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(copy, nonatomic) NSSet *issueIDs; // @synthesize issueIDs=_issueIDs;
@property(copy, nonatomic) NSArray *channelMemberships; // @synthesize channelMemberships=_channelMemberships;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end
