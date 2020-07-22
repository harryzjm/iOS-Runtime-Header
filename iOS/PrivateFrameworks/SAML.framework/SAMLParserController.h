//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SAMLParserController : NSObject
{
    NSData *_schemaData;
}

+ (void)initialize;
+ (id)sharedInstance;
@property(retain, nonatomic) NSData *schemaData; // @synthesize schemaData=_schemaData;
- (void).cxx_destruct;
- (id)dataFromString:(id)arg1 error:(id *)arg2;
- (id)parseCachedResponse:(id)arg1 error:(id *)arg2;
- (id)parseResponse:(id)arg1 error:(id *)arg2;
- (id)newLogoutRequest:(id *)arg1;
- (id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id *)arg3;
- (id)newAuthNRequest:(id)arg1 error:(id *)arg2;
- (id)newAttributeQuery:(id)arg1 error:(id *)arg2;
- (id)schema;
- (id)init;

@end

