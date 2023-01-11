//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFVariableString.h>

@class NSAttributedString;

@interface WFVariableString (AttributedString)
+ (id)attributedStringWithVariable:(id)arg1;
- (id)attributedStringByAddingTypingAttributes:(id)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withVariableString:(id)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withVariable:(id)arg2;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)initWithAttributedString:(id)arg1;
@end
