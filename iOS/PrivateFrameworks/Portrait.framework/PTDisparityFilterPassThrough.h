//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/PTAbstractDisparityFilter-Protocol.h>

@class NSString, PTUtil;
@protocol MTLCommandQueue;

@interface PTDisparityFilterPassThrough : NSObject <PTAbstractDisparityFilter>
{
    id <MTLCommandQueue> _commandQueue;
    PTUtil *_util;
}

- (void).cxx_destruct;
- (id)debugTexturesNames;
- (id)debugTextures:(id)arg1;
- (void)reset;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityFilteredPrev:(id)arg3 inDisparity:(id)arg4 outDisparityFiltered:(id)arg5 disparityBias:(float)arg6;
- (int)computeOpticalFlow:(id)arg1 inRGBA:(id)arg2 outDisplacement:(id)arg3;
- (id)initWithCommandQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
