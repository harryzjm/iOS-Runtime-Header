//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSError, NSString;

@interface HMCoreAnalyticsMetricEvent : HMFObject
{
    NSString *_name;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)eventPayload;
- (id)initWithName:(id)arg1;

@end
