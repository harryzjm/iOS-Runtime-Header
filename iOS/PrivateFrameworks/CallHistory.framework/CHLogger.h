//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallHistory/CHLoggerProtocol-Protocol.h>

@interface CHLogger : NSObject <CHLoggerProtocol>
{
    struct os_log_s *_logHandle;
}

- (struct os_log_s *)logHandle;
- (id)initWithDomain:(const char *)arg1;

@end
