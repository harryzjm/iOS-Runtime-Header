//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HSWiFiManager : NSObject
{
    struct __SCPreferences *_wifiPreferences;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _wiFiEnabled;
    _Bool _wiFiAssociated;
}

+ (id)sharedWiFiManager;
- (void).cxx_destruct;
@property(nonatomic, getter=isWiFiAssociated) _Bool wiFiAssociated; // @synthesize wiFiAssociated=_wiFiAssociated;
@property(nonatomic, getter=isWiFiEnabled) _Bool wiFiEnabled; // @synthesize wiFiEnabled=_wiFiEnabled;
- (void)_wifiCallBack:(unsigned int)arg1;
- (_Bool)_getWiFiAssociated;
- (_Bool)_getWiFiEnabledFromPrefs;
- (id)_processIdentifier;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

