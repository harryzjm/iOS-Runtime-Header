//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingBulkSessionStartLogEvent : HMMLogEvent
{
    NSString *_accessoryIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (id)initWithAccessoryIdentifier:(id)arg1;

@end

