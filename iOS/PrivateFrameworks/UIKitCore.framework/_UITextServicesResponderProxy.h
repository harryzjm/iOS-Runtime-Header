//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIResponder;
@protocol _UITextServicesResponderProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UITextServicesResponderProxy
{
    UIResponder *_responder;
    id <_UITextServicesResponderProxyDelegate> _delegate;
}

+ (id)_proxyWithResponder:(id)arg1;
@property(nonatomic) __weak id <_UITextServicesResponderProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
- (void).cxx_destruct;
- (void)_lookup:(id)arg1;
- (void)_define:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_share:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;

@end
