//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (DVTLogging)
- (id)dvt_swizzled_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)dvt_swizzled_removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)dvt_swizzled_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)dvt_tracker;
@end

