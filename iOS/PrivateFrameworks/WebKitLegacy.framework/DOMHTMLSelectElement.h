//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;

@interface DOMHTMLSelectElement
{
}

- (void)remove:(int)arg1;
- (void)add:(id)arg1 before:(id)arg2;
- (id)namedItem:(id)arg1;
- (id)item:(unsigned int)arg1;
@property(readonly) _Bool willValidate;
@property(copy) NSString *value;
@property int selectedIndex;
@property(readonly) int length;
@property(readonly) DOMHTMLOptionsCollection *options;
@property(readonly, copy) NSString *type;
@property int size;
@property(copy) NSString *name;
@property _Bool multiple;
@property(readonly) DOMHTMLFormElement *form;
@property _Bool disabled;
@property _Bool autofocus;
- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(_Bool)arg2;
- (void)_activateItemAtIndex:(int)arg1;
- (void)add:(id)arg1:(id)arg2;
- (int)structuralComplexityContribution;
- (id)listItemAtIndex:(int)arg1;
- (unsigned int)completeLength;

@end

