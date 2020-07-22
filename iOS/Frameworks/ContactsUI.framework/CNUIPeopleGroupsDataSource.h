//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CNContactStore, CNUIContactsEnvironment, NSArray, NSDictionary;
@protocol CNUIPeopleGroupsDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroupsDataSource : NSObject
{
    id <CNUIPeopleGroupsDataSourceDelegate> _delegate;
    CNContactStore *_contactStore;
    CNUIContactsEnvironment *_environment;
    NSArray *_singleGroupPeopleSources;
    NSArray *_multipleGroupsPeopleSources;
    NSDictionary *_sourcesByKind;
    NSArray *_groups;
}

@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSDictionary *sourcesByKind; // @synthesize sourcesByKind=_sourcesByKind;
@property(retain, nonatomic) NSArray *multipleGroupsPeopleSources; // @synthesize multipleGroupsPeopleSources=_multipleGroupsPeopleSources;
@property(retain, nonatomic) NSArray *singleGroupPeopleSources; // @synthesize singleGroupPeopleSources=_singleGroupPeopleSources;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) __weak id <CNUIPeopleGroupsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isSyntheticGroup:(id)arg1;
- (id)peopleInGroup:(id)arg1 withKeysToFetch:(id)arg2;
- (id)groupAtIndexPath:(id)arg1;
- (unsigned long long)numberOfGroupsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)buildGroupList;
- (void)sourceDidChange:(id)arg1;
- (void)reloadData;
- (void)createSources;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;
- (id)init;

@end
