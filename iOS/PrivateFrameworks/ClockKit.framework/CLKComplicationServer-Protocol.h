//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClockKit/NSObject-Protocol.h>

@class CLKComplication, NSString;

@protocol CLKComplicationServer <NSObject>
- (void)extendTimelineForComplication:(CLKComplication *)arg1;
- (void)reloadTimelineForComplication:(CLKComplication *)arg1;
- (void)checkinWithClientIdentifier:(NSString *)arg1 bundlePath:(NSString *)arg2;
@end

