//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PXGCornerMaskPathLibrary : NSObject
{
    NSMutableDictionary *_cache;
}

+ (id)sharedLibrary;
- (void).cxx_destruct;
- (id)pathForCornerRadius:(double)arg1 continuousCorners:(_Bool)arg2 screenScale:(double)arg3 maskColor:(id)arg4;
- (id)init;

@end
