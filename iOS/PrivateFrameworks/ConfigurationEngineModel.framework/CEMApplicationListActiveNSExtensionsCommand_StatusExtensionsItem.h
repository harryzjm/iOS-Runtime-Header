//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem
{
    NSString *_statusBundleIdentifier;
    NSString *_statusExtensionPoint;
    NSString *_statusDisplayName;
    NSString *_statusContainerDisplayName;
    NSString *_statusContainerIdentifier;
    NSString *_statusPath;
    NSString *_statusVersion;
    NSString *_statusUserElection;
}

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withPath:(id)arg4 withVersion:(id)arg5 withUserElection:(id)arg6;
+ (id)buildWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withContainerDisplayName:(id)arg4 withContainerIdentifier:(id)arg5 withPath:(id)arg6 withVersion:(id)arg7 withUserElection:(id)arg8;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *statusUserElection; // @synthesize statusUserElection=_statusUserElection;
@property(copy, nonatomic) NSString *statusVersion; // @synthesize statusVersion=_statusVersion;
@property(copy, nonatomic) NSString *statusPath; // @synthesize statusPath=_statusPath;
@property(copy, nonatomic) NSString *statusContainerIdentifier; // @synthesize statusContainerIdentifier=_statusContainerIdentifier;
@property(copy, nonatomic) NSString *statusContainerDisplayName; // @synthesize statusContainerDisplayName=_statusContainerDisplayName;
@property(copy, nonatomic) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
@property(copy, nonatomic) NSString *statusExtensionPoint; // @synthesize statusExtensionPoint=_statusExtensionPoint;
@property(copy, nonatomic) NSString *statusBundleIdentifier; // @synthesize statusBundleIdentifier=_statusBundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
