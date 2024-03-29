//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _GCHapticClientProxy;
@protocol NSCopying><NSObject><NSSecureCoding, _GCDriverClientHapticInterface, _GCLogicalDevice;

__attribute__((visibility("hidden")))
@interface _GCHapticLogicalDevice : NSObject
{
    id <_GCLogicalDevice> _logicalDevice;
    id <NSCopying><NSObject><NSSecureCoding> _identifier;
    NSMutableArray *_hapticClients;
    NSMutableArray *_hapticPlayers;
    float _prevSharpness[4];
    float _prevIntensity[4];
    id <_GCDriverClientHapticInterface> _driver;
    _GCHapticClientProxy *_clientConnection;
}

- (void).cxx_destruct;
- (void)stopAllHaptics;
- (_Bool)hasClients;
- (void)unregisterHapticClient:(id)arg1;
- (void)registerHapticClient:(id)arg1;
- (id)initWithIdentifier:(id)arg1 clientConnection:(id)arg2;

@end

