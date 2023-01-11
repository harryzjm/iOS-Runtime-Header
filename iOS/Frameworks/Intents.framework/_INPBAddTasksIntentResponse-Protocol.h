//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBTask, _INPBTaskList;

@protocol _INPBAddTasksIntentResponse <NSObject>
+ (Class)addedTasksType;
@property(readonly, nonatomic) _Bool hasModifiedTaskList;
@property(retain, nonatomic) _INPBTaskList *modifiedTaskList;
@property(readonly, nonatomic) unsigned long long addedTasksCount;
@property(copy, nonatomic) NSArray *addedTasks;
- (_INPBTask *)addedTasksAtIndex:(unsigned long long)arg1;
- (void)addAddedTasks:(_INPBTask *)arg1;
- (void)clearAddedTasks;
@end
