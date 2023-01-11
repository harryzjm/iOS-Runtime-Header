//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime, _INPBTask;

@protocol _INPBTaskList <NSObject>
+ (Class)tasksType;
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) unsigned long long tasksCount;
@property(copy, nonatomic) NSArray *tasks;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(retain, nonatomic) _INPBDataString *groupName;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (void)addTasks:(_INPBTask *)arg1;
- (void)clearTasks;
@end
