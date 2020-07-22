//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class FCArticle, NUANFEndOfArticlePublisherOperationResult;

@interface NUANFEndOfArticlePublisherOperation : FCOperation
{
    CDUnknownBlockType _completion;
    FCArticle *_article;
    double _scale;
    NUANFEndOfArticlePublisherOperationResult *_result;
}

@property(retain, nonatomic) NUANFEndOfArticlePublisherOperationResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (struct CGSize)adjustSizeForNameImage:(id)arg1;
- (id)loadAndScaleImageFromFilePath:(id)arg1;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithArticle:(id)arg1 scale:(double)arg2;

@end
