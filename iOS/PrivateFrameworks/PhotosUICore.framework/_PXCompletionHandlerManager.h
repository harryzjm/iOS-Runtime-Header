//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol _PXCompletionHandlerManagerDelegate;

@interface _PXCompletionHandlerManager : NSObject
{
    NSMutableArray *_completionHandlers;
    id <_PXCompletionHandlerManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_PXCompletionHandlerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callCompletionHandlers;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleTimeoutOfCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
