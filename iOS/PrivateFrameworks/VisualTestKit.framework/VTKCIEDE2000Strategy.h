//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKCIEDE2000Strategy : NSObject
{
}

+ (void)getLightness:(double *)arg1 A:(double *)arg2 B:(double *)arg3 alpha:(double *)arg4 fromColor:(id)arg5;
+ (double)CIEDE2000_L1:(double)arg1 A1:(double)arg2 B1:(double)arg3 L2:(double)arg4 A2:(double)arg5 B2:(double)arg6;
- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;
@property(readonly, nonatomic) double tolerance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

