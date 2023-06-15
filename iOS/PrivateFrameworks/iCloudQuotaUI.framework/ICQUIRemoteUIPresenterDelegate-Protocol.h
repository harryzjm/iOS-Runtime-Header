//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudQuotaUI/NSObject-Protocol.h>

@class ICQUIRemoteUIPresenter, NSError;

@protocol ICQUIRemoteUIPresenterDelegate <NSObject>

@optional
- (void)remoteUIFlowManager:(ICQUIRemoteUIPresenter *)arg1 didDismissWithError:(NSError *)arg2;
- (void)remoteUIFlowManager:(ICQUIRemoteUIPresenter *)arg1 didLoadWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)remoteUIFlowManager:(ICQUIRemoteUIPresenter *)arg1 didCompleteFlowWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

