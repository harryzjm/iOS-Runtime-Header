//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTView, AVTViewUpdater, UIView;
@protocol AVTViewSessionDelegate;

@interface AVTViewSession : NSObject
{
    _Bool _active;
    UIView *_avtViewContainer;
    AVTView *_avtView;
    AVTViewUpdater *_avtViewUpdater;
    CDUnknownBlockType _becomeActiveHandler;
    CDUnknownBlockType _tearDownHandler;
    id <AVTViewSessionDelegate> _delegate;
    struct CGSize _aspectRatio;
}

@property(nonatomic) __weak id <AVTViewSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CDUnknownBlockType tearDownHandler; // @synthesize tearDownHandler=_tearDownHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType becomeActiveHandler; // @synthesize becomeActiveHandler=_becomeActiveHandler;
@property(readonly, nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) AVTViewUpdater *avtViewUpdater; // @synthesize avtViewUpdater=_avtViewUpdater;
@property(nonatomic) AVTView *avtView; // @synthesize avtView=_avtView;
@property(nonatomic) UIView *avtViewContainer; // @synthesize avtViewContainer=_avtViewContainer;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)activateWithAVTView:(id)arg1 container:(id)arg2 updater:(id)arg3;
- (id)initWithBecomeActiveHandler:(CDUnknownBlockType)arg1 tearDownHandler:(CDUnknownBlockType)arg2 aspectRatio:(struct CGSize)arg3;

@end

