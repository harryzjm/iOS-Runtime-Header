//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSObject, SKUIClientContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUILoadGratisEligibilityOperation : NSOperation
{
    NSArray *_bundleIDs;
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_bodyData;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (id)init;

@end

