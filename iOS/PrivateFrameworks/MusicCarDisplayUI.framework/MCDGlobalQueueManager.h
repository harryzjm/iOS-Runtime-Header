//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface MCDGlobalQueueManager : NSObject
{
    NSOperationQueue *_globalQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *globalQueue; // @synthesize globalQueue=_globalQueue;
- (void).cxx_destruct;
- (id)init;

@end

