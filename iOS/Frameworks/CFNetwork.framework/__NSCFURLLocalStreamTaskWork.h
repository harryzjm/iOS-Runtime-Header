//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTaskWork : NSObject
{
    const char *_static_description;
    double _timeout;
    double _timeoutTime;
    NSError *_recvdError;
    _Bool _hasBeenCalledBack;
}

- (id)description;
- (const char *)_static_description;
- (id)initWithDescription:(const char *)arg1;

@end

