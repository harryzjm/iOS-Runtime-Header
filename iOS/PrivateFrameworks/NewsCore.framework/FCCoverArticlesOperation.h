//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCloudContext, NSArray, NSError;
@protocol FCCoreConfiguration;

@interface FCCoverArticlesOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    NSArray *_headlines;
    NSArray *_supplementalHeadlines;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(copy) NSArray *supplementalHeadlines; // @synthesize supplementalHeadlines=_supplementalHeadlines;
@property(copy) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)_supplementalCoverArticleListIDs;
- (void)performOperation;
- (_Bool)validateOperation;

@end

