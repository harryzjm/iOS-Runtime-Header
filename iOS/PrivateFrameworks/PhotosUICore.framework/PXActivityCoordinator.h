//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXActivityCoordinator : NSObject
{
    NSMutableArray *_records;
}

+ (id)coordinatorForActivity:(id)arg1;
- (void).cxx_destruct;
- (void)_update;
- (void)unregisterItem:(id)arg1;
- (void)registerItem:(id)arg1;
- (id)init;

@end
