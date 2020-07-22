//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteFetchDelegate-Protocol.h>
#import <ContactsAutocomplete/CNCancelable-Protocol.h>

@class CNAutocompleteFetchRequest, CNAutocompleteQueryResponsePreparer, CNAutocompleteUserSession, CNCancelationToken, NSString;
@protocol CNAutocompleteFetchDelegate, CNScheduler;

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable>
{
    id <CNAutocompleteFetchDelegate> _delegate;
    id <CNScheduler> _scheduler;
    CNAutocompleteQueryResponsePreparer *_responsePreparer;
    unsigned long long _openNetworkActivityCalls;
    CNCancelationToken *_cancelationToken;
    CNAutocompleteUserSession *_userSession;
    CNAutocompleteFetchRequest *_fetchRequest;
}

+ (id)responseScheduler;
@property(nonatomic) unsigned long long openNetworkActivityCalls; // @synthesize openNetworkActivityCalls=_openNetworkActivityCalls;
- (void).cxx_destruct;
- (void)setDuetResultsFuture:(id)arg1;
- (void)cancel;
- (void)queueUncancelableMessageToDelegate:(CDUnknownBlockType)arg1;
- (void)queueMessageToDelegate:(CDUnknownBlockType)arg1;
- (_Bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)queueDidEndNetworkActivityMessageForFetch:(id)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (id)suppressResultsWithAddresses:(id)arg1;
- (id)askDelegateToAdjustResults;
- (id)sortResults;
- (id)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 scheduler:(id)arg4;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
