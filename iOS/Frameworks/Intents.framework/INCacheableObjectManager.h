//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol INCacheableObjectManagerDelegate, OS_dispatch_queue;

@interface INCacheableObjectManager : NSObject
{
    NSObject<OS_dispatch_queue> *_observerMutationQueue;
    id <INCacheableObjectManagerDelegate> _delegate;
}

+ (id)sharedManager;
@property(nonatomic) __weak id <INCacheableObjectManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forwardCacheableObject:(id)arg1;
- (id)_init;

@end
