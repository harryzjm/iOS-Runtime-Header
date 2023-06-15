//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface SUUITemplateLoader : NSObject
{
    SUUITemplateLoader *_retainSelf;
    NSArray *_URLs;
    CDUnknownBlockType _completionBlock;
    NSOperationQueue *_operationQueue;
    NSRegularExpression *_templateParsingRegularExpression;
    NSMutableArray *_errors;
    NSMutableDictionary *_templateStrings;
    long long _pendingOperationCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property(readonly, nonatomic) NSMutableDictionary *templateStrings; // @synthesize templateStrings=_templateStrings;
@property(readonly, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) NSRegularExpression *templateParsingRegularExpression; // @synthesize templateParsingRegularExpression=_templateParsingRegularExpression;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) NSArray *URLs; // @synthesize URLs=_URLs;
- (void)load;
- (void)_operationDidFinish:(id)arg1;
- (void)_operation:(id)arg1 didFailWithError:(id)arg2;
- (void)_operation:(id)arg1 didCompleteWithOutput:(id)arg2;
- (id)_operationWithURL:(id)arg1;
- (id)initWithURLs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

