//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DAEGroupExpansionContext : NSObject
{
    _Bool _shouldSyncCalendar;
    NSString *_principalPath;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
    NSDictionary *_results;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSyncCalendar; // @synthesize shouldSyncCalendar=_shouldSyncCalendar;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
- (void)finishedWithError:(id)arg1;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
