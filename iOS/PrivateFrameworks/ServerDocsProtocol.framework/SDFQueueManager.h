//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SDFQueueManager : NSObject
{
    NSMutableDictionary *_serviceQueues;
}

+ (id)sharedQueueManager;
- (void).cxx_destruct;
- (id)queueForServiceWithUniqueIdentifier:(id)arg1;
- (id)init;

@end
