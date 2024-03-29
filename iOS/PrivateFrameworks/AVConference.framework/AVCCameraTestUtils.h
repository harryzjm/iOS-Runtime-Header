//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCCameraTestUtils : NSObject
{
}

+ (_Bool)expectedGFTResolutionForDevice:(id)arg1 ratio:(struct CGSize *)arg2;
+ (_Bool)findExpectedFramerate:(float *)arg1 forDevice:(id)arg2;
+ (_Bool)expectedPreviewResolutionForDevice:(id)arg1 width:(int *)arg2 height:(int *)arg3;
+ (_Bool)isCameraAvailable:(long long)arg1;
+ (_Bool)isCameraAvailable;
+ (_Bool)performReaction;
+ (_Bool)isReactionAvailable;
+ (id)defaultCameraUID;

@end

