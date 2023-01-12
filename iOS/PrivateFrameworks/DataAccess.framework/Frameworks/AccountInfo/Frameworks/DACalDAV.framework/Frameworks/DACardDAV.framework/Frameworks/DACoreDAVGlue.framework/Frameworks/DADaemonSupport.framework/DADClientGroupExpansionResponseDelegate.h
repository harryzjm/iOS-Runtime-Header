//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DADaemonSupport/DAEventsGroupExpansionResponseConsumer-Protocol.h>

@class NSData, NSString;

@interface DADClientGroupExpansionResponseDelegate <DAEventsGroupExpansionResponseConsumer>
{
    NSString *_principalPath;
    NSData *_resultsData;
}

- (void).cxx_destruct;
- (void)groupExpansionFinishedWithResults:(id)arg1 error:(id)arg2;
- (void)performRequest;
- (void)finishWithError:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 principalPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
