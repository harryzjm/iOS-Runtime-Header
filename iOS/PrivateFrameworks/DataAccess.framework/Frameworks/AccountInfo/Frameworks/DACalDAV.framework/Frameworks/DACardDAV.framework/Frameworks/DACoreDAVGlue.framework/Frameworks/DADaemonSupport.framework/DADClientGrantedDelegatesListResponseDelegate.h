//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DADaemonSupport/DAEventsGrantedDelegatesListResponseConsumer-Protocol.h>

@class NSArray, NSString;

@interface DADClientGrantedDelegatesListResponseDelegate <DAEventsGrantedDelegatesListResponseConsumer>
{
    id _requestID;
    NSArray *_results;
}

- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)grantedDelegatesListRequestFinishedWithResults:(id)arg1 error:(id)arg2;
- (void)performRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
