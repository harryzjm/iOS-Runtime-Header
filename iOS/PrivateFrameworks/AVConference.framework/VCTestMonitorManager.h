//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCTestMonitorManager : NSObject
{
    _Bool _toneInjectionEnabled;
    _Bool _forceNetworkCellular;
    _Bool _enableLoopbackInterface;
    _Bool _enableOneToOneMode;
    double _emulatedRxPLR;
    NSString *_cannedReplayPath;
    int _forcedTargetBitrate;
    int _forcedCapBitrate;
    NSString *_emulatedNetworkConfigPath;
    NSNumber *_initialMemoryUsage;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

+ (id)sharedManager;
@property(nonatomic) _Bool enableOneToOneMode; // @synthesize enableOneToOneMode=_enableOneToOneMode;
@property(retain, nonatomic) NSString *emulatedNetworkConfigPath; // @synthesize emulatedNetworkConfigPath=_emulatedNetworkConfigPath;
@property(nonatomic) int forcedCapBitrate; // @synthesize forcedCapBitrate=_forcedCapBitrate;
@property(nonatomic) int forcedTargetBitrate; // @synthesize forcedTargetBitrate=_forcedTargetBitrate;
@property(retain, nonatomic) NSString *cannedReplayPath; // @synthesize cannedReplayPath=_cannedReplayPath;
@property(nonatomic) double emulatedRxPLR; // @synthesize emulatedRxPLR=_emulatedRxPLR;
@property(nonatomic) _Bool enableLoopbackInterface; // @synthesize enableLoopbackInterface=_enableLoopbackInterface;
@property _Bool forceNetworkCellular; // @synthesize forceNetworkCellular=_forceNetworkCellular;
@property _Bool toneInjectionEnabled; // @synthesize toneInjectionEnabled=_toneInjectionEnabled;
- (void)registerBlocksForService;
- (void)reportMemoryUsage;
- (void)dealloc;
- (id)init;

@end
