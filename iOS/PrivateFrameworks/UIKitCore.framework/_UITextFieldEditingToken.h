//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _UICascadingTextStorage;

__attribute__((visibility("hidden")))
@interface _UITextFieldEditingToken : NSObject
{
    struct {
        unsigned int restoreTextAttributes:1;
        unsigned int restoreDefaultAttributes:1;
        unsigned int ended:1;
    } _flags;
    _UICascadingTextStorage *_textStorage;
    NSArray *_attributeNames;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *attributeNames; // @synthesize attributeNames=_attributeNames;
@property(readonly, nonatomic) __weak _UICascadingTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(nonatomic) _Bool restoreDefaultAttributes;
@property(nonatomic) _Bool restoreTextAttributes;
- (_Bool)endEditing;
- (id)initWithTextStorage:(id)arg1 attributeNames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

