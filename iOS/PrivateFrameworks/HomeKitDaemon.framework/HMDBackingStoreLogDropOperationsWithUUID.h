//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreLogDropOperationsWithUUID
{
    NSUUID *_uuid;
    long long _maskValue;
    long long _compareValue;
}

- (void).cxx_destruct;
@property(nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)mainReturningError;
- (id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end

