//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextItemInteractionHandler-Protocol.h>

@class NSString, UIView;
@protocol _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextPlainLinkInteractionHandler : NSObject <_UITextItemInteractionHandler>
{
    struct _NSRange _range;
    UIView<_UITextContent> *_view;
}

- (void).cxx_destruct;
- (id)_addLinkToReadingListAction:(id)arg1;
- (id)_openAppLinkInExternalApplicationAction:(id)arg1;
- (id)_openAppLinkInDefaultBrowserAction:(id)arg1;
- (id)_shareLinkAction:(id)arg1;
- (id)_copyLinkAction:(id)arg1;
- (id)_openURLAction:(id)arg1;
- (id)_titleForLink:(id)arg1;
- (CDUnknownBlockType)_handlerRequiringUnlockedDevice:(CDUnknownBlockType)arg1;
- (id)link;
- (id)contextMenuConfiguration;
- (id)defaultAction;
- (id)initWithRange:(struct _NSRange)arg1 rect:(struct CGRect)arg2 inTextContentView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
