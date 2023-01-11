//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKContactsSearchManagerDelegate-Protocol.h>

@class CKContactsSearchManager, NSArray, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate>
{
    CKContactsSearchManager *_contactsSearchManager;
    NSArray *_conversationCache;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *conversationCache; // @synthesize conversationCache=_conversationCache;
@property(retain, nonatomic) CKContactsSearchManager *contactsSearchManager; // @synthesize contactsSearchManager=_contactsSearchManager;
- (void).cxx_destruct;
- (void)chatStateChanged:(id)arg1;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (void)updateShortcutItems;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

