//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKUIExpandViewElement
{
    _Bool _open;
    _Bool _previousIsOpen;
}

@property(nonatomic) _Bool previousIsOpen; // @synthesize previousIsOpen=_previousIsOpen;
@property(readonly, nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
