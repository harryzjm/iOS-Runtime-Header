//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSWPTwoPartAction : NSObject
{
    CDUnknownBlockType _startAction;
    CDUnknownBlockType _cancelAction;
    CDUnknownBlockType _finishAction;
    _Bool _performImmediately;
}

+ (id)actionWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;
@property _Bool performImmediately; // @synthesize performImmediately=_performImmediately;
- (void)cancel;
- (void)performFinishAction;
- (void)performStartAction;
- (void)dealloc;
- (id)initWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;

@end

