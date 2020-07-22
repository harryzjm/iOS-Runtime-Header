//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFMailAccountProxy, MFMailComposeContactsSearchController, NSArray;

@protocol MFMailComposeContactsSearchControllerDelegate <NSObject>
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didFindCorecipients:(NSArray *)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 finishedWithResults:(_Bool)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didSortResults:(NSArray *)arg2;
- (MFMailAccountProxy *)sendingAccountProxyForComposeContactsSearchController:(MFMailComposeContactsSearchController *)arg1;
@end

