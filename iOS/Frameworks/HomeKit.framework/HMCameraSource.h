//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject
{
    HMFUnfairLock *_lock;
    _HMCameraSource *_source;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _HMCameraSource *source; // @synthesize source=_source;
- (id)aspectRatio;
- (id)initWithSource:(id)arg1;

@end
