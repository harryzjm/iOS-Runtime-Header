//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVolumeConfiguration-Protocol.h>

@class NSString;

@interface SVVolumeConfiguration : NSObject <SVVolumeConfiguration>
{
    _Bool _muted;
    double _volume;
}

@property(readonly, nonatomic) double volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
- (id)initWithVolume:(double)arg1 muted:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
