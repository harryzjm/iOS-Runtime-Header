//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface GCSystemGesturesState : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSSet *_disabledSystemGestureInputNames;
    NSSet *_enabledSystemGestureInputNames;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *enabledSystemGestureInputNames; // @synthesize enabledSystemGestureInputNames=_enabledSystemGestureInputNames;
@property(retain, nonatomic) NSSet *disabledSystemGestureInputNames; // @synthesize disabledSystemGestureInputNames=_disabledSystemGestureInputNames;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;
- (id)initWithEnabledSystemGestures:(id)arg1 disabledSystemGestures:(id)arg2 bundleIdentifier:(id)arg3;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
