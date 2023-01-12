//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTFilePath, DVTVersion, NSSet, NSString;

@interface DVTSimulatorRuntimeInfo : NSObject
{
    _Bool _isInternal;
    NSString *_runtimeIdentifier;
    NSString *_platformIdentifier;
    DVTFilePath *_bundlePath;
    DVTVersion *_version;
    NSString *_buildVersion;
    NSSet *_chosenForSDKs;
}

- (void).cxx_destruct;
@property(readonly) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(readonly) NSSet *chosenForSDKs; // @synthesize chosenForSDKs=_chosenForSDKs;
@property(readonly) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly) DVTVersion *version; // @synthesize version=_version;
@property(readonly) DVTFilePath *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly) NSString *runtimeIdentifier; // @synthesize runtimeIdentifier=_runtimeIdentifier;
- (id)description;
- (id)initWithRuntimeIdentifier:(id)arg1 platformIdentifier:(id)arg2 bundleURL:(id)arg3 version:(id)arg4 buildVersion:(id)arg5 chosenForSDKs:(id)arg6 isInternal:(_Bool)arg7;

@end

