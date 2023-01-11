//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VUIMediaEntityFetchResponse;
@protocol VUIMediaEntitiesFetchControllerDelegate;

@interface VUIMediaEntitiesFetchController
{
    id <VUIMediaEntitiesFetchControllerDelegate> _delegate;
    NSArray *_requests;
    VUIMediaEntityFetchResponse *_response;
    NSArray *_responses;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(readonly, nonatomic) VUIMediaEntityFetchResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) __weak id <VUIMediaEntitiesFetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyFetchRequests:(id)arg1 didFailWithError:(id)arg2;
- (void)_notifyFetchRequests:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(_Bool)arg2;
- (void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg1;
- (void)_handleManualFetchControllerOperationDidComplete:(id)arg1;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)cancelFetch;
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;

@end
