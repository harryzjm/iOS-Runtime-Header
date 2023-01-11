//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXContactsPresenter, SXMailPresenter;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXMailPresenter> _mailPresenter;
    id <SXContactsPresenter> _contactsPresenter;
}

@property(readonly, nonatomic) id <SXContactsPresenter> contactsPresenter; // @synthesize contactsPresenter=_contactsPresenter;
@property(readonly, nonatomic) id <SXMailPresenter> mailPresenter; // @synthesize mailPresenter=_mailPresenter;
- (void).cxx_destruct;
- (void)addToContacts:(id)arg1;
- (void)composeMailTo:(id)arg1 subject:(id)arg2;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

