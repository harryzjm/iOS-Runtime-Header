//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactsEnvironment, CNiOSPersonFetchRequest;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetcher : NSObject
{
    void *_addressBook;
    CNiOSPersonFetchRequest *_fetchRequest;
    CNContactsEnvironment *_environment;
}

+ (id)peopleForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (id)sortPeople:(id)arg1;
- (_Bool)shouldSortInMemory;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)fetchPeopleReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3;

@end

