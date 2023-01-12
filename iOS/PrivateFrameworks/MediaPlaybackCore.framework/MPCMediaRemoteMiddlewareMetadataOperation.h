//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCFuture, MPCMediaRemoteMiddleware, MPRequest, MPSectionedCollection, NSArray, NSError, NSIndexPath, NSMapTable, NSString;
@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation
{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    NSMapTable *_inputOperations;
    MPCMediaRemoteMiddleware *_middleware;
    MPRequest<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> *_request;
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_playingIdentifierFuture;
    MPCFuture *_queueIdentifierFuture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPCFuture *queueIdentifierFuture; // @synthesize queueIdentifierFuture=_queueIdentifierFuture;
@property(retain, nonatomic) MPCFuture *playingIdentifierFuture; // @synthesize playingIdentifierFuture=_playingIdentifierFuture;
@property(retain, nonatomic) MPCFuture *playQueueIdentifiersFuture; // @synthesize playQueueIdentifiersFuture=_playQueueIdentifiersFuture;
@property(retain, nonatomic) MPRequest<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> *request; // @synthesize request=_request;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(retain, nonatomic) NSMapTable *inputOperations; // @synthesize inputOperations=_inputOperations;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3;
- (struct _MSVSignedRange)rangeFromTracklistRange:(CDStruct_912cb5d2)arg1;
@property(readonly, nonatomic) NSArray *outputProtocols;
@property(readonly, nonatomic) NSArray *inputProtocols;
- (id)timeoutDescription;
- (void)execute;
- (void)_loadPlayingIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMiddleware:(id)arg1 request:(id)arg2;
@property(readonly, nonatomic) MPSectionedCollection *sourceContentItems;
@property(readonly, nonatomic) MPSectionedCollection *modelObjects;
@property(readonly, copy, nonatomic) NSIndexPath *playingIndexPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

