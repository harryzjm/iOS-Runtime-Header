//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMElement, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebTextPlaceholder
{
    UIWebDocumentView *_webDocumentView;
    DOMElement *_element;
}

+ (id)placeholderWithWebDocumentView:(id)arg1;
@property(retain, nonatomic) DOMElement *element; // @synthesize element=_element;
- (id)rects;
- (void)dealloc;

@end
