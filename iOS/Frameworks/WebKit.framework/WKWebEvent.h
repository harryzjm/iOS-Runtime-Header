//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/WebEvent.h>

@class UIEvent;

__attribute__((visibility("hidden")))
@interface WKWebEvent : WebEvent
{
    struct RetainPtr<UIEvent> _uiEvent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIEvent *uiEvent;
- (id)initWithEvent:(id)arg1;

@end
