//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMClosedViewfinderController;

@protocol CAMClosedViewfinderControllerDelegate <NSObject>
- (void)closedViewfinderController:(CAMClosedViewfinderController *)arg1 wantsViewfinderOpenForReason:(long long)arg2;
- (void)closedViewfinderController:(CAMClosedViewfinderController *)arg1 wantsViewfinderClosedForReason:(long long)arg2;
@end

