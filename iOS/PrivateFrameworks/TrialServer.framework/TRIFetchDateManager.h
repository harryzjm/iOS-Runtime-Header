//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIDateProviding-Protocol.h>

@class TRIKVStore;

@interface TRIFetchDateManager : NSObject <TRIDateProviding>
{
    TRIKVStore *_keyValueStore;
}

+ (id)managerWithKeyValueStore:(id)arg1;
+ (id)kvstoreKeyForType:(unsigned char)arg1 container:(int)arg2 teamId:(id)arg3;
- (void).cxx_destruct;
- (void)setLastFetchDate:(id)arg1 type:(unsigned char)arg2 container:(int)arg3 teamId:(id)arg4;
- (id)lastFetchDateWithType:(unsigned char)arg1 container:(int)arg2 teamId:(id)arg3;
- (id)initWithKeyValueStore:(id)arg1;
- (id)init;

@end
