//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet;

@interface PPNotificationHandlerGuardedData : NSObject
{
    _Bool _delayedFiringInProgress;
    double _lastFiringTimeSince1970;
    NSMapTable *_blockMap;
    NSMutableSet *_objects;
}

- (void).cxx_destruct;
- (id)init;

@end
