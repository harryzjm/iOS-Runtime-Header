//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class CLKTimeFormatter;

@protocol CLKTimeFormatterObserver <NSObject>

@optional
- (void)timeFormatterReportingLiveTimeDidChange:(CLKTimeFormatter *)arg1;
- (void)timeFormatterTextDidChange:(CLKTimeFormatter *)arg1;
@end

