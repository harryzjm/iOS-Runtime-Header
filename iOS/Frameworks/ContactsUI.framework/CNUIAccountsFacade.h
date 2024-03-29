//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNUIAccountsFacadeRequestRunner;

__attribute__((visibility("hidden")))
@interface CNUIAccountsFacade : NSObject
{
    ACAccountStore *_accountStore;
    CNUIAccountsFacadeRequestRunner *_requestRunner;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNUIAccountsFacadeRequestRunner *requestRunner; // @synthesize requestRunner=_requestRunner;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2;
- (id)init;

@end

