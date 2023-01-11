//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCloudContext, FCFeedDescriptor, FCFeedGroup, FCFeedGroupEmittingContext, FCFeedRefreshSession, NSArray, NSSet;
@protocol FCCoreConfiguration;

@interface FCFeedViewportInsertPendingGroupOperation
{
    FCFeedRefreshSession *_resultRefreshSession;
    NSArray *_resultUpdatedRefreshSessions;
    FCFeedGroup *_resultInsertedGroup;
    NSSet *_resultDeletedElementIDs;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedDescriptor *_feedDescriptor;
    FCFeedRefreshSession *_refreshSession;
    NSArray *_feedGroupEmitters;
    FCFeedGroupEmittingContext *_groupEmittingContext;
    NSArray *_internalElements;
    CDUnknownBlockType _insertGroupCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType insertGroupCompletionHandler; // @synthesize insertGroupCompletionHandler=_insertGroupCompletionHandler;
@property(retain, nonatomic) NSArray *internalElements; // @synthesize internalElements=_internalElements;
@property(retain, nonatomic) FCFeedGroupEmittingContext *groupEmittingContext; // @synthesize groupEmittingContext=_groupEmittingContext;
@property(retain, nonatomic) NSArray *feedGroupEmitters; // @synthesize feedGroupEmitters=_feedGroupEmitters;
@property(retain, nonatomic) FCFeedRefreshSession *refreshSession; // @synthesize refreshSession=_refreshSession;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_finishWithInsertedGroup:(id)arg1 backedByPendingGroup:(id)arg2 forEmitter:(id)arg3;
- (id)_nextGroupToInsert:(id *)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

