//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject
{
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (id)displayName;
- (id)allTargets;
- (void)setPrimaryTarget:(id)arg1;
- (id)primaryTarget;
- (_Bool)removeActivityTarget:(id)arg1;
- (_Bool)addActivityTarget:(id)arg1;
- (void)dealloc;

@end

