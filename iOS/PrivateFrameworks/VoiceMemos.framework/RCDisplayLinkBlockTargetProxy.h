//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RCDisplayLinkBlockTargetProxy
{
    CDUnknownBlockType _handlerBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
- (void)displayLinkFired:(id)arg1;
- (void)dealloc;
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;

@end

