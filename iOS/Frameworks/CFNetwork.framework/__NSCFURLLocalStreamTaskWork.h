//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject
{
    const char *_static_description;
    double _timeout;
    double _timeoutTime;
    NSError *_recvdError;
    _Bool _hasBeenCalledBack;
    _Bool _timerStarted;
}

- (id)description;

@end
