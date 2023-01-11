//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface BOXMetadataTemplateRequest
{
    NSArray *_notMatchingEtags;
    NSString *_scope;
    NSString *_templateName;
}

@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSArray *notMatchingEtags; // @synthesize notMatchingEtags=_notMatchingEtags;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithScope:(id)arg1 template:(id)arg2;
- (id)initWithScope:(id)arg1;
- (id)init;

@end
