//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSharedStoreReview;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AppStoreReviewController : NSObject
{
    AMSSharedStoreReview *_sharedStoreReview;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)showAppReviewPromptInSceneIfNeeded:(id)arg1;
- (void)applicationDidEnterForeground;
- (void)_setupSharedStoreReviewIfNeeded;
- (id)init;

@end

