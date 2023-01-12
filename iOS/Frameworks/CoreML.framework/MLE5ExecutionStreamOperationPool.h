//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLE5ExecutionStreamOperationPool : NSObject
{
    NSURL *_e5BundleURL;
    NSString *_functionName;
    NSDictionary *_outputDescriptionsByName;
    NSMutableSet *_pool;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) NSMutableSet *pool; // @synthesize pool=_pool;
@property(readonly) NSDictionary *outputDescriptionsByName; // @synthesize outputDescriptionsByName=_outputDescriptionsByName;
@property(readonly) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, copy) NSURL *e5BundleURL; // @synthesize e5BundleURL=_e5BundleURL;
- (void)putBack:(id)arg1;
- (id)takeOut;
- (id)initWithE5BundleAtURL:(id)arg1 functionName:(id)arg2 outputDescriptionsByName:(id)arg3;

@end

