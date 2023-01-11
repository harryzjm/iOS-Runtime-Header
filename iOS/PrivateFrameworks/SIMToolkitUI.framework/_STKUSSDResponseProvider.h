//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/STKAlertSessionResponseProvider-Protocol.h>

@class CoreTelephonyClient, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
    NSDictionary *_options;
    _Bool _hasSentResponse;
    NSObject<OS_os_log> *_logger;
}

- (void).cxx_destruct;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
- (void)sendResponse:(long long)arg1;
@property(readonly, nonatomic) _Bool hasSentResponse;
@property(readonly, nonatomic) NSObject<OS_os_log> *logger;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 telephonyClient:(id)arg2 options:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
