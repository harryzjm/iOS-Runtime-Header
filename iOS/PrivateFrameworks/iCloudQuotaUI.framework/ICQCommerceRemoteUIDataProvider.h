//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISPropertyListProvider.h>

@class ICQCommerceRemoteUIDelegate;

@interface ICQCommerceRemoteUIDataProvider : ISPropertyListProvider
{
    _Bool _plist;
    ICQCommerceRemoteUIDelegate *_parent;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ICQCommerceRemoteUIDelegate *parent; // @synthesize parent=_parent;
@property(nonatomic, getter=isPlist) _Bool plist; // @synthesize plist=_plist;
- (void)_setFailureType:(id)arg1;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;

@end
