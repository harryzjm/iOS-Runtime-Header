//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class SFAirDropBrowser;

@protocol SFAirDropBrowserDelegate <NSObject>
- (void)browserDidChangePeople:(SFAirDropBrowser *)arg1;
- (void)browser:(SFAirDropBrowser *)arg1 didDeletePersonAtIndex:(unsigned long long)arg2;
- (void)browser:(SFAirDropBrowser *)arg1 didInsertPersonAtIndex:(unsigned long long)arg2;
- (void)browserWillChangePeople:(SFAirDropBrowser *)arg1;
@end

