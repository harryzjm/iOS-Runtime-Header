//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactsLoggerProvider-Protocol.h>

@class NSString;
@protocol CNContactsLogger, CNFavoritesLogger, CNGeminiLogger, CNRegulatoryLogger, CNSpotlightIndexingLogger;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider>
{
    id <CNContactsLogger> _contactsLogger;
    id <CNSpotlightIndexingLogger> _spotlightIndexingLogger;
    id <CNRegulatoryLogger> _regulatoryLogger;
    id <CNFavoritesLogger> _favoritesLogger;
    id <CNGeminiLogger> _geminiLogger;
}

+ (id)defaultProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNGeminiLogger> geminiLogger;
@property(readonly, nonatomic) id <CNFavoritesLogger> favoritesLogger;
@property(readonly, nonatomic) id <CNRegulatoryLogger> regulatoryLogger;
@property(readonly, nonatomic) id <CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property(readonly, nonatomic) id <CNContactsLogger> contactsLogger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

