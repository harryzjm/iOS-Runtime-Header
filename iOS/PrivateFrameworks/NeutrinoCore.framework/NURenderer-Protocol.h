//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class CIImage, CIRenderDestination, CIRenderTask;

@protocol NURenderer <NSObject>
- (CIRenderTask *)renderImage:(CIImage *)arg1 rect:(CDStruct_0973877e)arg2 toDestination:(CIRenderDestination *)arg3 atPoint:(CDStruct_912cb5d2)arg4 error:(out id *)arg5;
@end

