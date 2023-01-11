//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>
#import <TrialServer/TRITaskAttributing-Protocol.h>

@class NSString, TRIDownloadOptions;

@interface TRITaskAttributionInternalInsecure : NSObject <TRITaskAttributing, NSCopying>
{
    int _triCloudKitContainer;
    NSString *_teamIdentifier;
    NSString *_applicationBundleIdentifier;
    TRIDownloadOptions *_networkOptions;
}

+ (id)taskAttributionWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4;
+ (id)taskAttributionFromPersistedTask:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TRIDownloadOptions *networkOptions; // @synthesize networkOptions=_networkOptions;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(readonly, nonatomic) int triCloudKitContainer; // @synthesize triCloudKitContainer=_triCloudKitContainer;
@property(readonly, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
- (id)init;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTaskAttribution:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithReplacementNetworkOptions:(id)arg1;
- (id)copyWithReplacementApplicationBundleIdentifier:(id)arg1;
- (id)copyWithReplacementTriCloudKitContainer:(int)arg1;
- (id)copyWithReplacementTeamIdentifier:(id)arg1;
- (id)initWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4;
- (id)asPersistedTaskAttribution;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
