//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISBundleResourceProvider
{
    NSString *_templateType;
    NSURL *_bundleURL;
    NSDictionary *_iconDictionary;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *iconDictionary; // @synthesize iconDictionary=_iconDictionary;
@property(retain) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain) NSString *templateType; // @synthesize templateType=_templateType;
- (id)description;
- (_Bool)_isAppleResource;
- (id)symbol;
- (id)resourceNamed:(id)arg1;
- (id)iconResource;
- (void)resolveResources;
- (id)initWithBundle:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBundleURL:(id)arg1 iconDictionary:(id)arg2 options:(unsigned long long)arg3;

// Remaining properties
@property unsigned long long options;

@end

