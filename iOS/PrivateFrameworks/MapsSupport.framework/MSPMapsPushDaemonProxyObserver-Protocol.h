//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPRemoteModelAccessDelegate-Protocol.h>

@class NSData, NSString;

@protocol MSPMapsPushDaemonProxyObserver <MSPRemoteModelAccessDelegate>
- (void)pushDaemonProxyReceivedNotificationData:(NSData *)arg1 forType:(NSString *)arg2 recordIdentifier:(NSString *)arg3;
- (void)historyDidChange;
- (void)favoritesDidChange;
@end

