//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoDurationObserving;

@protocol SVVideoDurationObserverFactory <NSObject>
- (id <SVVideoDurationObserving>)createDurationObserverForVideo:(id <SVVideo>)arg1;
@end

