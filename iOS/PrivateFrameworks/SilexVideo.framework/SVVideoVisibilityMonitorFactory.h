//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVisibilityMonitorFactory-Protocol.h>

@class NSString;
@protocol SVVideoVisiblePercentageManager;

@interface SVVideoVisibilityMonitorFactory : NSObject <SVVisibilityMonitorFactory>
{
    id <SVVideoVisiblePercentageManager> _videoVisiblePercentageManager;
}

@property(readonly, nonatomic) id <SVVideoVisiblePercentageManager> videoVisiblePercentageManager; // @synthesize videoVisiblePercentageManager=_videoVisiblePercentageManager;
- (void).cxx_destruct;
- (id)createVisibilityMonitorForVideo:(id)arg1;
- (id)initWithVideoVisiblePercentageManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
