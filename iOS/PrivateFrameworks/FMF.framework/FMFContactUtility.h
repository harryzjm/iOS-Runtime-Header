//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNContactStore;

@interface FMFContactUtility : NSObject
{
    CNContactStore *_contactStore;
    CNContactFormatter *_contactFormatter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contactKeys;
- (id)findOptimalContactInContacts:(id)arg1;
- (id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2;
- (id)getContactForHandle:(id)arg1;
- (id)displayNameForContact:(id)arg1 andHandle:(id)arg2;
- (id)shortDisplayNameForContact:(id)arg1 andHandle:(id)arg2;

@end
