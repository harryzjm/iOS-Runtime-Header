//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVPlayerItemObserving, SVVideo;

@protocol SVPlayerItemObserverFactory <NSObject>
- (id <SVPlayerItemObserving>)createPlayerItemObserverForVideo:(id <SVVideo>)arg1;
@end

