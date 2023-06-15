//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContactStoreContactsFetchResult-Protocol.h>

@class CNContactStoreContactsFetchResult, NSArray;
@protocol CNKeyDescriptor;

@protocol CNContactStoreContactsFetchResultDecorator <CNContactStoreContactsFetchResult>
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
@property(readonly, nonatomic) NSArray *decoratedValue;
- (id)initWithContacts:(NSArray *)arg1 keysToFetch:(NSArray *)arg2 unifyContactsFromMainStore:(_Bool)arg3;
- (id)initWithContactsFetchResult:(CNContactStoreContactsFetchResult *)arg1 keysToFetch:(NSArray *)arg2 unifyContactsFromMainStore:(_Bool)arg3;
@end

