//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@class FPProgressProxy;

__attribute__((visibility("hidden")))
@interface _FPParentProgress : NSProgress
{
    FPProgressProxy *_progressProxy;
}

- (void).cxx_destruct;
@property(readonly) FPProgressProxy *progressProxy; // @synthesize progressProxy=_progressProxy;
- (void)setProgressProxy:(id)arg1;
- (_Bool)isPausable;
- (_Bool)isCancellable;
- (void)dealloc;

@end

