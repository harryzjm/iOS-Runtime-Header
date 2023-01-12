//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSCache, _UNCNContactResolver;

@interface _UNNotificationContactService : NSObject
{
    NSCache *_resultsByServiceRecord;
    _UNCNContactResolver *_resolver;
    CNContactStore *_curatedContactStore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setResult:(id)arg1 forContact:(id)arg2 bundleIdentifier:(id)arg3;
- (id)_matchForContact:(id)arg1 bundleIdentifier:(id)arg2;
- (void)didAddToCuratedContactsForContact:(id)arg1 bundleIdentifier:(id)arg2 cnContactIdentifier:(id)arg3;
- (id)newCuratedContactForContact:(id)arg1 imageData:(id)arg2 bundleIdentifier:(id)arg3;
- (_Bool)canAddToCuratedContacts:(id)arg1 bundleIdentifier:(id)arg2;
- (void)confirmCuratedContactSuggestion:(_Bool)arg1 forContact:(id)arg2 bundleIdentifier:(id)arg3;
- (id)curatedContactForContact:(id)arg1 bundleIdentifier:(id)arg2 keysToFetch:(id)arg3;
- (id)curatedContactMatchDetailsForContact:(id)arg1 bundleIdentifier:(id)arg2;
- (id)updateServiceWithContact:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithResolver:(id)arg1;

@end
