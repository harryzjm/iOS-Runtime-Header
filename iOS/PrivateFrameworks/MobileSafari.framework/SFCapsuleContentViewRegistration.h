//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFCapsuleContentViewRegistration : NSObject
{
    NSMutableSet *_views;
    CDUnknownBlockType _createViewBlock;
}

- (void).cxx_destruct;
- (void)enqueueView:(id)arg1;
- (id)createOrDequeueViewWithExistingView:(id)arg1;
- (id)initWithCreateViewBlock:(CDUnknownBlockType)arg1;

@end
