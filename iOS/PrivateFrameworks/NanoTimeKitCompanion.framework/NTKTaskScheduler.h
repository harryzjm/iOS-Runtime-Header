//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKTaskScheduler : NSObject
{
}

- (void)cancelAllTasks;
- (void)cancelTaskForToken:(id)arg1;
- (id)scheduleTask:(CDUnknownBlockType)arg1 identifier:(id)arg2;

@end
