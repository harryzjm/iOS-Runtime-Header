//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGXpcTransaction : NSObject
{
    struct atomic_flag _done;
}

- (void)done;
- (void)setTimeout:(double)arg1;
- (void)dealloc;
- (id)init;

@end
