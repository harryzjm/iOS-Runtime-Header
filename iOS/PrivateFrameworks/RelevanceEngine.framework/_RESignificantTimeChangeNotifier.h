//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject
{
    REUpNextScheduler *_scheduler;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_notify;
- (void)dealloc;
- (id)init;

@end

