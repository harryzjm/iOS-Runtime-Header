//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _EXExtensionPoint : NSObject
{
    unsigned int _platform;
    NSString *_identifier;
    NSDictionary *_SDKDictionary;
    unsigned long long _variant;
    NSURL *_url;
    NSString *_name;
    NSString *_domain;
}

- (void).cxx_destruct;
@property(retain) NSString *domain; // @synthesize domain=_domain;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSURL *url; // @synthesize url=_url;
@property unsigned long long variant; // @synthesize variant=_variant;
@property unsigned int platform; // @synthesize platform=_platform;
@property(retain) NSDictionary *SDKDictionary; // @synthesize SDKDictionary=_SDKDictionary;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

