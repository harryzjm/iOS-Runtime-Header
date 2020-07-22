//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject
{
    _Bool _enabled;
    TITextInputTraits *_textInputTraits;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
- (void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id *)arg3 outAfterString:(id *)arg4;
- (void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long *)arg2 outAfterLength:(unsigned long long *)arg3;
- (void)dealloc;
- (id)initWithTextInputTraits:(id)arg1;

@end

