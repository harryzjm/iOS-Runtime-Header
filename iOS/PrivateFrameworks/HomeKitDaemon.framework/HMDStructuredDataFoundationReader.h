//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSEnumerator, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDStructuredDataFoundationReader
{
    NSEnumerator *_enumerator;
    NSDictionary *_dictionary;
    NSMutableArray *_stack;
}

- (void).cxx_destruct;
- (struct _HMDStructuredDataToken)nextTokenAfterToken:(const struct _HMDStructuredDataToken *)arg1;
- (void)failWithError:(id)arg1;

@end

