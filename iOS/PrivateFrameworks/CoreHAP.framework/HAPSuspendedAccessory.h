//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPSuspendedAccessory : HMFObject
{
    NSString *_name;
    NSString *_identifier;
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)wakeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 queue:(id)arg4;

@end
