//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTPreloadingTask-Protocol.h>

@class NSArray, NSString;

@interface AVTPresetResourcesLoadingTask : NSObject <AVTPreloadingTask>
{
    _Bool canceled;
    CDUnknownBlockType _completionHandler;
    NSArray *_presetResources;
}

@property(readonly, copy, nonatomic) NSArray *presetResources; // @synthesize presetResources=_presetResources;
@property(getter=isCanceled) _Bool canceled; // @synthesize canceled;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPresetResources:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

