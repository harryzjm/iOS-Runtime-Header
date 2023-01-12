//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNContactStore, CNContactStoreFilter, CNContactViewCache, CNUIContactsEnvironment;

__attribute__((visibility("hidden")))
@interface CNContactListActionConfiguration : NSObject
{
    CNContactStore *_contactStore;
    CNUIContactsEnvironment *_environment;
    CNContactViewCache *_contactViewCache;
    CNContactFormatter *_contactFormatter;
    CNContactStoreFilter *_contactStoreFilter;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactStoreFilter *contactStoreFilter; // @synthesize contactStoreFilter=_contactStoreFilter;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)containerForContainerIdentifier:(id)arg1;

@end

