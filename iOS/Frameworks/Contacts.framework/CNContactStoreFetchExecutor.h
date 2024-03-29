//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNResult, NSString;

__attribute__((visibility("hidden")))
@interface CNContactStoreFetchExecutor : NSObject
{
    CNContactStore *_store;
    CNResult *_result;
}

- (void).cxx_destruct;
@property(retain) CNResult *result; // @synthesize result=_result;
@property(readonly) CNContactStore *store; // @synthesize store=_store;
- (void)visitChangeHistoryFetchRequest:(id)arg1;
- (void)visitContactFetchRequest:(id)arg1;
- (id)countForFetchRequest:(id)arg1;
- (id)executeFetchRequest:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

