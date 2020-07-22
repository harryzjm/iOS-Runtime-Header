//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UITextReplacementGenerator : NSObject
{
    UITextRange *_replacementRange;
    NSString *_stringToReplace;
}

@property(copy, nonatomic) NSString *stringToReplace; // @synthesize stringToReplace=_stringToReplace;
@property(retain, nonatomic) UITextRange *replacementRange; // @synthesize replacementRange=_replacementRange;
- (void).cxx_destruct;
- (_Bool)isStringToReplaceMisspelled;
- (id)replacements;
- (void)addPlaceholderForEmptyReplacements:(id)arg1;
- (id)replacementWithText:(id)arg1;
- (_Bool)shouldAllowString:(id)arg1 intoReplacements:(id)arg2;

@end

