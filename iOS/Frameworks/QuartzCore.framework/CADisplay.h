//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayAttributes, CADisplayMode, NSArray, NSString;

@interface CADisplay : NSObject
{
    void *_impl;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)TVOutDisplay;
+ (id)mainDisplay;
+ (id)displays;
@property(readonly) int linkQuality;
@property(readonly) CADisplayAttributes *externalDisplayAttributes;
- (id)description;
@property(readonly) _Bool supportsExtendedColors;
@property(readonly) unsigned int odLUTVersion;
@property(readonly) NSString *nativeOrientation;
@property(readonly, getter=isCloningSupported) _Bool cloningSupported;
@property(readonly, getter=isCloned) _Bool cloned;
@property(copy, nonatomic) NSString *overscanAdjustment;
@property(readonly) struct CGSize overscanAmounts;
@property(readonly) double overscanAmount;
@property(readonly, getter=isOverscanned) _Bool overscanned;
@property(readonly) long long minimumFrameDuration;
@property(readonly) double heartbeatRate;
@property(readonly) double refreshRate;
@property(readonly, getter=isExternal) _Bool external;
@property(readonly, getter=isSupported) _Bool supported;
@property(readonly) int processId;
@property(readonly) long long tag;
@property(readonly, nonatomic) struct CGRect safeBounds;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGRect bounds;
@property _Bool allowsVirtualModes;
@property(copy, nonatomic) NSString *colorMode;
@property(readonly, nonatomic) CADisplayMode *preferredMode;
@property(retain, nonatomic) CADisplayMode *currentMode;
@property(readonly, nonatomic) NSArray *availableModes;
@property(readonly) NSString *uniqueId;
@property(readonly) unsigned int connectionSeed;
@property(readonly) unsigned int seed;
@property(readonly) unsigned int displayId;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *name;
- (void)update;
- (void)_invalidate;
- (id)_initWithDisplay:(struct Display *)arg1;

@end

