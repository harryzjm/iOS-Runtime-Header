//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BSBlockTransaction
{
    NSString *_debugName;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (id)_graphNodeDebugName;
- (id)_descriptionProem;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
