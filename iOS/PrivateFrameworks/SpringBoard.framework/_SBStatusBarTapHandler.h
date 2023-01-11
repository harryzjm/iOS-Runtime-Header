//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject
{
    NSURL *_url;
    CDUnknownBlockType _block;
    _SBStatusBarTapApplicationDestination *_appDestination;
    _SBStatusBarTapApplicationDestination *_applicationDestination;
}

@property(readonly, copy, nonatomic) _SBStatusBarTapApplicationDestination *applicationDestination; // @synthesize applicationDestination=_applicationDestination;
- (void).cxx_destruct;
- (_Bool)handleTap;
@property(readonly, nonatomic) _Bool canRequestUnlock;
- (id)initWithApplicationDestination:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end
