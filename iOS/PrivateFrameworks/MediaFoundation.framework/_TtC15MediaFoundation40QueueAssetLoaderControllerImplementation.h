//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC15MediaFoundation40QueueAssetLoaderControllerImplementation : _TtCs12_SwiftObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *silentFailureDirection;
    MISSING_TYPE *errorResolutionItem;
    MISSING_TYPE *token;
    MISSING_TYPE *wrapAround;
    MISSING_TYPE *queueController;
    MISSING_TYPE *itemLoader;
    MISSING_TYPE *itemBuffer;
    MISSING_TYPE *loadingCompletions;
    MISSING_TYPE *reporter;
    MISSING_TYPE *errorController;
}

- (void)reportCriticalError:(id)arg1 forItem:(id)arg2;
- (void)resolveError:(id)arg1 forItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reset;
@property(nonatomic, readonly) NSDictionary *stateDictionary;

@end
