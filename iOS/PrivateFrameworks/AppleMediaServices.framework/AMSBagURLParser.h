//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSBagURLParser : NSObject
{
}

+ (struct _NSRange)_rangeOfTemplateInURLString:(id)arg1;
+ (struct _NSRange)_rangeofSubstringWithOpeningTag:(id)arg1 closingTag:(id)arg2 inString:(id)arg3;
+ (id)_firstVariableInTemplate:(id)arg1 includeTags:(_Bool)arg2;
+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_URLBySubstitutingVariablesInURLString:(id)arg1 range:(struct _NSRange)arg2 usingPromiseBlock:(CDUnknownBlockType)arg3;
+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingPromiseBlock:(CDUnknownBlockType)arg2;

@end

