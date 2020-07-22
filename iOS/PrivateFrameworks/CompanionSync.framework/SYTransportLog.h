//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface SYTransportLog : NSObject
{
    NSObject<OS_os_log> *_log;
    NSString *_facility;
    NSObject<OS_os_log> *_oslog;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property(copy, nonatomic) NSString *facility; // @synthesize facility=_facility;
- (void).cxx_destruct;
- (void)_logOSMessage:(const char *)arg1 args:(struct __va_list_tag [1])arg2 returnAddress:(void *)arg3;
- (void)logMessage:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (void)logMessage:(id)arg1;
- (void)_createLog;
- (id)init;

@end
