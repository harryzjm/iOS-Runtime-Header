//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIDetector.h"

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIVNFaceDetector : CIDetector
{
    CIContext *context;
}

@property(readonly, retain) CIContext *context; // @synthesize context;
- (void)dealloc;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end

