//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface _UIStatusBarAction : NSObject
{
    _Bool _enabled;
    CDUnknownBlockType _block;
}

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

