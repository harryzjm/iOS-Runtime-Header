//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntelligencePlatform/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol GDFeedbackServiceProtocol <NSObject>
- (_Bool)logWithFeedbackData:(NSData *)arg1 type:(NSString *)arg2 variant:(NSString *)arg3 eventId:(long long)arg4 withTimestamp:(NSDate *)arg5 shouldProcessImmediately:(_Bool)arg6 error:(id *)arg7;
@end

