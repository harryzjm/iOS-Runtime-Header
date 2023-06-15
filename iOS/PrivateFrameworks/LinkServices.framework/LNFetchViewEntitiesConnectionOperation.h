//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface LNFetchViewEntitiesConnectionOperation
{
    NSArray *_interactionIDs;
    CDUnknownBlockType _completionHandler;
    NSArray *_result;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) NSArray *interactionIDs; // @synthesize interactionIDs=_interactionIDs;
- (void)finishWithError:(id)arg1;
- (void)start;
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithConnectionInterface:(id)arg1 interactionIDs:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

