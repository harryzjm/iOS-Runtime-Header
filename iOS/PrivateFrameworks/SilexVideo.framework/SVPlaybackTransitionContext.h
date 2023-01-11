//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlaybackTransitionContext-Protocol.h>

@class NSString;
@protocol SVVideo;

@interface SVPlaybackTransitionContext : NSObject <SVPlaybackTransitionContext>
{
    id <SVVideo> _fromVideo;
    id <SVVideo> _toVideo;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) id <SVVideo> toVideo; // @synthesize toVideo=_toVideo;
@property(readonly, nonatomic) id <SVVideo> fromVideo; // @synthesize fromVideo=_fromVideo;
- (void).cxx_destruct;
- (void)completeTransition:(_Bool)arg1;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
