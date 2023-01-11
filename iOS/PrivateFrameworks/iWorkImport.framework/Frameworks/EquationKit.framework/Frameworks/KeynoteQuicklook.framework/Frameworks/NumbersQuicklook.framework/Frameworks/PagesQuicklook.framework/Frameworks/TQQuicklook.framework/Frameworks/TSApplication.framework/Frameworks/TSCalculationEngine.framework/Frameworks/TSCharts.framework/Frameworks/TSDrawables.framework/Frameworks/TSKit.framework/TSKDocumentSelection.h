//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSKDocumentRoot;

@interface TSKDocumentSelection
{
    TSKDocumentRoot *mDocumentRoot;
}

+ (Class)archivedSelectionClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak TSKDocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;

@end
