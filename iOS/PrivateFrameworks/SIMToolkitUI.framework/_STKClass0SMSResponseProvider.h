//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface _STKClass0SMSResponseProvider : NSObject
{
    NSObject<OS_os_log> *_logger;
}

- (void).cxx_destruct;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
- (void)sendResponse:(long long)arg1;
@property(readonly, nonatomic) NSObject<OS_os_log> *logger;
@property(readonly, nonatomic) _Bool hasSentResponse;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

