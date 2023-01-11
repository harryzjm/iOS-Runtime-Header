//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _EARTokenizer;

@interface _EARTextNormalization : NSObject
{
    _EARTokenizer *_tokenizer;
    struct unique_ptr<quasar::Munger, std::__1::default_delete<quasar::Munger>> _munger;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)munge:(id)arg1;
- (id)tokenize:(id)arg1;
- (id)normalize:(id)arg1;
- (id)initWithMungeRules:(id)arg1;
- (id)initWithNcsRoot:(id)arg1;
- (id)initWithNcsRoot:(id)arg1 mungeRules:(id)arg2;
- (id)initWithNcsRoot:(id)arg1 mungeRuleFile:(id)arg2;
- (id)init;

@end
