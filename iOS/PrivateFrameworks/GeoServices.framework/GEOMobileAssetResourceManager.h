//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOMobileAssetResourceManager : NSObject
{
}

+ (id)sharedManager;
- (void)fetchResourceOfType:(unsigned long long)arg1 extraParameters:(id)arg2 options:(unsigned long long)arg3 result:(CDUnknownBlockType)arg4;
- (void)updateNow;

@end
