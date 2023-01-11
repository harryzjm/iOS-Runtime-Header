//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKFollowUpProvider-Protocol.h>

@class FLFollowUpController, NSString;

@interface AKFollowUpController : NSObject <AKFollowUpProvider>
{
    FLFollowUpController *_followupController;
}

- (void).cxx_destruct;
- (_Bool)clearNotificationsForItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)removeFollowUpItems:(id)arg1 error:(id *)arg2;
- (_Bool)addFollowUpItems:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllFollowUpItems:(id *)arg1;
- (id)pendingFollowUpItems:(id *)arg1;
- (id)initWithFLFollowupController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
