//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Recap/NSCoding-Protocol.h>
#import <Recap/NSCopying-Protocol.h>

@class NSArray, RCPEventSenderProperties;

@interface RCPEvent : NSObject <NSCoding, NSCopying>
{
    unsigned long long _deliveryTimestamp;
    RCPEventSenderProperties *_senderProperties;
    struct __IOHIDEvent *_hidEvent;
    NSArray *_preActions;
}

+ (id)eventWithHIDEvent:(struct __IOHIDEvent *)arg1 deliveryTimeStamp:(unsigned long long)arg2 senderProperties:(id)arg3 preActions:(id)arg4;
+ (id)eventWithHIDEvent:(struct __IOHIDEvent *)arg1 deliveryTimeStamp:(unsigned long long)arg2;
+ (id)eventWithHIDEvent:(struct __IOHIDEvent *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *preActions; // @synthesize preActions=_preActions;
@property(readonly, nonatomic) struct __IOHIDEvent *hidEvent; // @synthesize hidEvent=_hidEvent;
@property(retain, nonatomic) RCPEventSenderProperties *senderProperties; // @synthesize senderProperties=_senderProperties;
@property(nonatomic) unsigned long long deliveryTimestamp; // @synthesize deliveryTimestamp=_deliveryTimestamp;
- (void)dealloc;
- (id)eventAdjustedForDeliveryTimeInterval:(double)arg1 eventEnvironment:(id)arg2;
@property(readonly, nonatomic) unsigned long long timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithDeliveryTimeStamp:(unsigned long long)arg1;

@end
