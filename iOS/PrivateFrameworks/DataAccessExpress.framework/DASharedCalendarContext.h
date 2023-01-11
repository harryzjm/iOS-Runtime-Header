//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DASharedCalendarContext : NSObject
{
    _Bool _shouldSyncCalendar;
    NSString *_calendarID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSyncCalendar; // @synthesize shouldSyncCalendar=_shouldSyncCalendar;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSString *calendarID; // @synthesize calendarID=_calendarID;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
