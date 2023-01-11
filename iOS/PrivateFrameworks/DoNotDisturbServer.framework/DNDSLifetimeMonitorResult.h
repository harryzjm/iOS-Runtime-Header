//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DNDSLifetimeMonitorResult : NSObject
{
    NSArray *_activeUUIDs;
    NSArray *_expiredUUIDs;
}

@property(readonly, copy, nonatomic) NSArray *expiredUUIDs; // @synthesize expiredUUIDs=_expiredUUIDs;
@property(readonly, copy, nonatomic) NSArray *activeUUIDs; // @synthesize activeUUIDs=_activeUUIDs;
- (void).cxx_destruct;
- (id)initWithActiveUUIDs:(id)arg1 expiredUUIDs:(id)arg2;

@end

