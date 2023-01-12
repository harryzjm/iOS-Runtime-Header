//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNGroupIdentityHeaderViewController.h>

#import <SearchUI/SKStatusSubscriptionServiceDelegate-Protocol.h>

@class NSArray, NSString, SKStatusSubscriptionService;

@interface SearchUIPersonHeaderViewController : CNGroupIdentityHeaderViewController <SKStatusSubscriptionServiceDelegate>
{
    SKStatusSubscriptionService *_subscriptionService;
    NSArray *_statusSubcriptions;
}

+ (id)actionsViewConfiguration;
- (void).cxx_destruct;
@property(retain) NSArray *statusSubcriptions; // @synthesize statusSubcriptions=_statusSubcriptions;
@property(retain) SKStatusSubscriptionService *subscriptionService; // @synthesize subscriptionService=_subscriptionService;
- (void)subscriptionStateChanged:(id)arg1;
- (void)subscriptionReceivedStatusUpdate:(id)arg1;
- (void)subscriptionInvitationReceived:(id)arg1;
- (_Bool)userIsUnavailable;
- (void)updateSubscriptions;
- (void)updateWithContact:(id)arg1;
- (void)groupIdentityDidUpdate:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
