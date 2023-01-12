//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLResponse;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_data;
}

- (void).cxx_destruct;
@property(readonly) NSURLResponse *response;
- (void)task:(id)arg1 deliverData:(id)arg2 complete:(_Bool)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)task:(id)arg1 deliverResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

