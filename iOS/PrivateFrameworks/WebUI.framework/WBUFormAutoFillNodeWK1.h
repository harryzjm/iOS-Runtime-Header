//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebUI/WBSFormAutoFillNode-Protocol.h>

@class DOMNode, NSString;

@interface WBUFormAutoFillNodeWK1 : NSObject <WBSFormAutoFillNode>
{
    DOMNode *_domNode;
}

+ (id)autoFillNodeWithDOMNode:(id)arg1;
@property(readonly, nonatomic) DOMNode *domNode; // @synthesize domNode=_domNode;
- (void).cxx_destruct;
- (_Bool)isHTMLTextAreaElementUserEdited;
- (_Bool)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(_Bool)arg1;
- (struct CGRect)elementBounds;
- (id)initWithDOMNode:(id)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
