//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADACAccountsProvider-Protocol.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>
{
    ACAccountStore *_accountStore;
}

@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)arg1;
- (id)accounts;
- (id)initWithAccountStore:(id)arg1;

@end
