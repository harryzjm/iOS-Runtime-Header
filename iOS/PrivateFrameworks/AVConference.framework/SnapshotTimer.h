//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SnapshotTimer : NSObject
{
    _Bool taskIsComplete;
}

+ (void)takeSnapshotForTask:(id)arg1;
@property(nonatomic) _Bool taskIsComplete; // @synthesize taskIsComplete;
- (void)checkout;
- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;
- (id)init;

@end

