//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSVURLDataConsumer.h>

@class NSRegularExpression;

__attribute__((visibility("hidden")))
@interface SUUITemplateParsingDataProvider : SSVURLDataConsumer
{
    NSRegularExpression *_regularExpression;
}

+ (id)templateParsingRegularExpression;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)initWithRegularExpression:(id)arg1;

@end

