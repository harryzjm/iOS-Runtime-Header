//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface USOEntityNode
{
    struct UsoEntityNode *_usoEntityNode;
}

- (void)addUtteranceAlignmentWithAsrIndex:(unsigned int)arg1 StartIndex:(unsigned int)arg2 endIndex:(unsigned int)arg3 startUnicodeScalarIndex:(unsigned int)arg4 endUnicodeScalarIndex:(unsigned int)arg5;
- (void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3;
- (id)initWithCppEntityNode:(struct UsoEntityNode *)arg1;

@end
