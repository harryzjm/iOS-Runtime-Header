//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SSSearchInAppResultBuilder
{
    NSString *_appName;
    NSString *_appBundleId;
    NSString *_searchString;
}

+ (id)buildResultWithAppName:(id)arg1 appBundleId:(id)arg2 searchString:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (id)buildCommand;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)initWithAppName:(id)arg1 appBundleId:(id)arg2 searchString:(id)arg3;

@end
