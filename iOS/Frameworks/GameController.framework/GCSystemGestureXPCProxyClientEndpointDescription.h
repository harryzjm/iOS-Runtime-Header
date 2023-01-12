//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCControllerComponentDescription-Protocol.h>

@class GCSystemGestureXPCProxyClientEndpoint, GCSystemGesturesState, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCSystemGestureXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>
{
    GCSystemGesturesState *_initialSystemGesture;
    GCSystemGestureXPCProxyClientEndpoint *_materializedObject;
    _Bool _isSystemGestureObserver;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialSystemGesture:(id)arg2 isSystemGestureObserver:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
