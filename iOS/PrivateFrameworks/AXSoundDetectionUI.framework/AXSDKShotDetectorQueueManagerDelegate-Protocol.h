//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXSoundDetectionUI/NSObject-Protocol.h>

@class AXSDDetectorManager;

@protocol AXSDKShotDetectorQueueManagerDelegate <NSObject>
@property(retain, nonatomic) AXSDDetectorManager *detectorManager;
- (void)assetsReadyAndDetectorsAdded;
@end

