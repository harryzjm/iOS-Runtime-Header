//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

__attribute__((visibility("hidden")))
@interface SKUIImageDeckViewElement : SKUIViewElement
{
    double _initialDragLeft;
    double _initialDragRight;
    double _additionalDragLeft;
    double _additionalDragRight;
}

@property(readonly, nonatomic) double additionalDragRight; // @synthesize additionalDragRight=_additionalDragRight;
@property(readonly, nonatomic) double additionalDragLeft; // @synthesize additionalDragLeft=_additionalDragLeft;
@property(readonly, nonatomic) double initialDragRight; // @synthesize initialDragRight=_initialDragRight;
@property(readonly, nonatomic) double initialDragLeft; // @synthesize initialDragLeft=_initialDragLeft;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

