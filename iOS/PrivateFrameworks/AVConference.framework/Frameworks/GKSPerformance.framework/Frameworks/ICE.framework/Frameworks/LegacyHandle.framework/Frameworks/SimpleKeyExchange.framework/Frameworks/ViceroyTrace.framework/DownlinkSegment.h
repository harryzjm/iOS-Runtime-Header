//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol DownlinkSegmentDelegate;

__attribute__((visibility("hidden")))
@interface DownlinkSegment
{
    id <DownlinkSegmentDelegate> _delegate;
}

- (id)segmentReport;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3;

@end
