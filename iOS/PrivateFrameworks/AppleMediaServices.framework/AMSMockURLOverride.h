//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class AMSMockURLResponse, AMSObservable, NSMutableArray;

@interface AMSMockURLOverride : NSObject <NSCopying>
{
    AMSObservable *_executedObservable;
    AMSMockURLResponse *_response;
    NSMutableArray *_comparators;
}

+ (id)overrideWithURLRegex:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithPathComponent:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithHost:(id)arg1 usingResponse:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *comparators; // @synthesize comparators=_comparators;
@property(retain, nonatomic) AMSMockURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) AMSObservable *executedObservable; // @synthesize executedObservable=_executedObservable;
- (void)_withURLMatchingHost:(id)arg1 containingPath:(id)arg2 queryItems:(id)arg3;
- (_Bool)shouldOverrideURLRequest:(id)arg1;
- (void)withResponse:(id)arg1;
- (void)withHTTPBodyValidation:(CDUnknownBlockType)arg1 encoding:(long long)arg2;
- (void)withURLRegexValidation:(id)arg1;
- (void)withURLQueryItems:(id)arg1;
- (void)withURLContainingPath:(id)arg1;
- (void)withURLMatchingHost:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
