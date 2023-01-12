//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, SKUIImageViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDialogTemplateViewElement : SKUIViewElement
{
    long long _dialogType;
}

@property(readonly, nonatomic) long long dialogType; // @synthesize dialogType=_dialogType;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIImageViewElement *image;
@property(readonly, nonatomic) SKUILabelViewElement *title;
@property(readonly, nonatomic) SKUILabelViewElement *message;
@property(readonly, nonatomic) NSArray *buttons;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

