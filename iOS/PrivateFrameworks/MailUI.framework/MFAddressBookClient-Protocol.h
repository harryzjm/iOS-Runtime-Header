//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class MFAddressBookManager;

@protocol MFAddressBookClient <NSObject>
- (void)addressBookPreferencesChangedForAddressBookManager:(MFAddressBookManager *)arg1;
- (void)addressBookManager:(MFAddressBookManager *)arg1 addressBookDidChange:(void *)arg2;
@end

