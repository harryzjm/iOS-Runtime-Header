//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMFWebsitePolicyMonitor, NSMutableDictionary;
@protocol WBSDigitalHealthManagerDelegate;

@interface WBSDigitalHealthManager : NSObject
{
    DMFWebsitePolicyMonitor *_monitor;
    NSMutableDictionary *_trackedUrlsToUsageState;
    id <WBSDigitalHealthManagerDelegate> _delegate;
}

+ (void)_updateWebpageUsage:(id)arg1 withDigitalHealthManagerUsageState:(unsigned long long)arg2;
+ (void)deleteUsageHistoryForURL:(id)arg1;
+ (void)deleteUsageHistoryFromDate:(id)arg1 toDate:(id)arg2;
+ (void)deleteAllUsageHistory;
@property(nonatomic) __weak id <WBSDigitalHealthManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_historyWasCleared:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)stopUsageTrackingForURL:(id)arg1;
- (void)updateUsageTrackingForURL:(id)arg1 toState:(unsigned long long)arg2;
- (void)getOverlayStateForURLs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_requestPoliciesForWebsites:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObserving;
@property(readonly, getter=isDeviceManagementEnabled) _Bool deviceManagementEnabled;
- (void)dealloc;
- (id)init;

@end

