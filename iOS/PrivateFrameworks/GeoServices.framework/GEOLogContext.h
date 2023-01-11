//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface GEOLogContext : NSObject <NSCopying>
{
    NSMutableArray *_logMsgStates;
}

+ (id)logContextFromTraits:(id)arg1;
+ (id)logContextWithDefaultTraitsForCachedContext;
+ (id)logContextWithDefaultTraits;
+ (id)defaultGlobalLogContext;
+ (id)emptyLogContext;
@property(readonly, nonatomic) NSArray *logMsgStates; // @synthesize logMsgStates=_logMsgStates;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_registerMapViewStateWithTraits:(id)arg1;
- (void)_registerDeviceLocaleStateWithTraits:(id)arg1;
- (void)_registerDeviceBaseStateWithTraits:(id)arg1;
- (void)_registerDefaultMapUIState;
- (void)_registerExperimentsState;
- (void)updateDeviceConnectionState;
- (void)_registerDeviceConnectionState;
- (void)_registerApplicationIdentifierState:(id)arg1;
- (void)_registerDeviceIdentifierState:(id)arg1;
- (void)_registerLogContextWithTraits:(id)arg1;
- (void)_initializeGlobalDefaultStates;
- (void)_initializeDefaultStates;
- (id)currentExperimentsState;
- (id)logMsgStateOfType:(int)arg1;
- (void)registerUserSessionStateOfType:(unsigned long long)arg1 isNavSessionAllowed:(_Bool)arg2 userSessionSnapshot:(id)arg3;
- (void)unregisterLogMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)registerLogMsgState:(id)arg1;
- (id)logContextByMergingLogContext:(id)arg1;
- (void)mergeLogContext:(id)arg1;
- (id)initWithTraits:(id)arg1;
- (id)initWithDefaultTraits;
- (id)initWithGlobalDefaultStates;
- (id)initWithDefaultStates;
- (id)init;

@end

