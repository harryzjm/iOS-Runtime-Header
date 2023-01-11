//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKSyncDeletedEventIDs : NSObject
{
    NSMutableDictionary *_deletedEventIDsBySourceDeviceID;
}

- (void).cxx_destruct;
- (void)addDeletedEventID:(id)arg1 forSourceDeviceID:(id)arg2;
- (id)deletedEventIDsForSourceDeviceID:(id)arg1;
- (id)sourceDeviceIDs;
- (unsigned long long)count;
- (id)init;

@end

