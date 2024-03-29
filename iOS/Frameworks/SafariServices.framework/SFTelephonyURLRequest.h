//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLRequest : NSObject
{
    NSString *_successNotificationName;
    NSString *_failureNotificationName;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSString *failureNotificationName; // @synthesize failureNotificationName=_failureNotificationName;
@property(retain, nonatomic) NSString *successNotificationName; // @synthesize successNotificationName=_successNotificationName;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

