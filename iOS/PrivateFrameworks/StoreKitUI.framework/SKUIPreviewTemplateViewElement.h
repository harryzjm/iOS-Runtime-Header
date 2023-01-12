//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSString, SKUILockupViewElement;

__attribute__((visibility("hidden")))
@interface SKUIPreviewTemplateViewElement : SKUIViewElement
{
    long long _itemIdentifier;
    NSString *_previewURLString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *previewURLString; // @synthesize previewURLString=_previewURLString;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) SKUILockupViewElement *previewLockup;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

