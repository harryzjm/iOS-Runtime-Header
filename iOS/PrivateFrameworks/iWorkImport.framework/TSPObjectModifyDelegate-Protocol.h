//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPObject;

@protocol TSPObjectModifyDelegate <NSObject>
- (void)willModifyObject:(TSPObject *)arg1 duringReadOperation:(_Bool)arg2 shouldCaptureSnapshot:(_Bool)arg3;
- (unsigned long long)objectTargetType;
@end
