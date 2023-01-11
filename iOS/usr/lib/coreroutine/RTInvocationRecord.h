//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class NSString;

@interface RTInvocationRecord : NSObject <NSCopying>
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _failureBlock;
    NSString *_invocationDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *invocationDescription; // @synthesize invocationDescription=_invocationDescription;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)invokeFailure;
- (void)invoke;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 description:(id)arg3;

@end
