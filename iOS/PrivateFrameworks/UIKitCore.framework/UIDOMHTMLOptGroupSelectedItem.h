//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLOptGroupElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptGroupSelectedItem : NSObject
{
    DOMHTMLOptGroupElement *_node;
}

@property(retain, nonatomic) DOMHTMLOptGroupElement *_node; // @synthesize _node;
- (void)dealloc;
- (void)unselect;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isGroup;
- (_Bool)selected;
- (id)node;
- (id)initWithHTMLOptGroupNode:(id)arg1;

@end

