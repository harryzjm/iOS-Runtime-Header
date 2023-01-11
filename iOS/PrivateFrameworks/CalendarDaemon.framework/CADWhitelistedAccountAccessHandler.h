//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADAccountAccessHandler-Protocol.h>

@protocol CADACAccountsProvider;

__attribute__((visibility("hidden")))
@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler>
{
    id <CADACAccountsProvider> _accountsProvider;
}

@property(readonly, nonatomic) id <CADACAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
- (void).cxx_destruct;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (_Bool)isAccountManaged:(id)arg1;
- (id)initWithAccountsProvider:(id)arg1;

@end

