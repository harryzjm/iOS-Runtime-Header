//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGModelHyperparameters : NSObject
{
    NSString *_featuresModelId;
    NSString *_featuresVersion;
    unsigned long long _vectorLength;
    struct _NSRange _characterNGramRange;
    struct _NSRange _tokenNGramRange;
}

@property(readonly, nonatomic) unsigned long long vectorLength; // @synthesize vectorLength=_vectorLength;
@property(readonly, nonatomic) struct _NSRange tokenNGramRange; // @synthesize tokenNGramRange=_tokenNGramRange;
@property(readonly, nonatomic) struct _NSRange characterNGramRange; // @synthesize characterNGramRange=_characterNGramRange;
@property(readonly, copy, nonatomic) NSString *featuresVersion; // @synthesize featuresVersion=_featuresVersion;
@property(readonly, copy, nonatomic) NSString *featuresModelId; // @synthesize featuresModelId=_featuresModelId;
- (void).cxx_destruct;
- (id)sessionDescriptorForLanguage:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
