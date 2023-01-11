//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUserAgentBundleInfo : NSObject
{
    NSString *_identifier;
    NSString *_clientName;
    NSString *_clientVersion;
    NSDictionary *_infoPlist;
}

+ (id)_infoWithIdentifier:(id)arg1 clientName:(id)arg2 clientVersion:(id)arg3;
+ (id)_infoWithIdentifier:(id)arg1 clientName:(id)arg2;
+ (id)infoForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
@property(readonly, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_clientVersionFromIdentifier:(id)arg1 clientName:(id)arg2 infoPlist:(id)arg3 preferredVersion:(id)arg4;
- (id)_clientNameFromIdentifier:(id)arg1 infoPlist:(id)arg2 preferredClientName:(id)arg3;
- (id)_infoPlistFromIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 preferredClientName:(id)arg2 preferredClientVersion:(id)arg3;

@end
