//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface _NSIPCallbackSerialization : NSObject
{
    CDUnknownBlockType _endBlock;
    _Atomic _Bool _hasBegun;
    _Atomic _Bool _hasEnded;
    NSUUID *_UUID;
}

@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)sendEndBlock:(CDUnknownBlockType)arg1;
- (void)sendBeginBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

