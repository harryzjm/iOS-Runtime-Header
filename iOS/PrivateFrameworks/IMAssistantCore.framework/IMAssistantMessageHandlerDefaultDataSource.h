//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/IMAssistantMessageHandlerDataSource-Protocol.h>

@class CNContactStore, NSCache, NSString;
@protocol IMAssistantAccountDataSource, IMAssistantChatDataSource, IMAssistantContactsDataSource, IMAssistantCoreTelephonySubscriptionsDataSource, IMAssistantFileManager, IMFileTransferCenter, IMLocationManager;

@interface IMAssistantMessageHandlerDefaultDataSource : NSObject <IMAssistantMessageHandlerDataSource>
{
    _Bool _didRegisterForContactStoreChangeNotifications;
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didRegisterForContactStoreChangeNotifications; // @synthesize didRegisterForContactStoreChangeNotifications=_didRegisterForContactStoreChangeNotifications;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (_Bool)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1 error:(id *)arg2;
- (_Bool)screentimeAllowedToShowChat:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool isInternationalSpamFilteringEnabled;
- (void)registerForContactStoreChangeNotificationsIfNecessary;
- (void)contactStoreDidChange:(id)arg1;
@property(readonly, nonatomic) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property(readonly, nonatomic) NSCache *spiHandleToPersonCache;
@property(readonly, nonatomic) NSCache *handleToContactIdentifierCache;
@property(readonly, nonatomic) id <IMFileTransferCenter> fileTransferCenterDataSource;
@property(readonly, nonatomic) id <IMAssistantFileManager> fileManagerDataSource;
@property(readonly, nonatomic) id <IMLocationManager> locationManagerDataSource;
@property(readonly, nonatomic) id <IMAssistantCoreTelephonySubscriptionsDataSource> coreTelephonySubscriptionsDataSource;
@property(readonly, nonatomic) id <IMAssistantAccountDataSource> accountDataSource;
@property(readonly, nonatomic) id <IMAssistantContactsDataSource> contactsDataSource;
@property(readonly, nonatomic) id <IMAssistantChatDataSource> chatDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
