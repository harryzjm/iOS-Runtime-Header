//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface FutureValue : NSObject
{
    id _value;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain) id value; // @synthesize value=_value;
- (id)init;

@end
