//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBAppearance, NSDictionary, NSString, NSURL;

@interface BBAction : NSObject <NSCopying, NSSecureCoding>
{
    CDUnknownBlockType _internalBlock;
    _Bool _deliverResponse;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    _Bool _launchCanBypassPinLock;
    _Bool _authenticationRequired;
    _Bool _shouldDismissBulletin;
    NSString *_activatePluginName;
    NSDictionary *_activatePluginContext;
    long long _actionType;
    NSString *_identifier;
    BBAppearance *_appearance;
    unsigned long long _activationMode;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    long long _behavior;
    NSDictionary *_behaviorParameters;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(CDUnknownBlockType)arg2;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(CDUnknownBlockType)arg2;
+ (id)actionWithLaunchBundleID:(id)arg1;
+ (id)actionWithLaunchURL:(id)arg1;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;
+ (id)actionWithIdentifier:(id)arg1;
+ (id)actionWithCallblock:(CDUnknownBlockType)arg1;
+ (id)actionWithAppearance:(id)arg1;
+ (id)action;
@property(copy, nonatomic) NSDictionary *behaviorParameters; // @synthesize behaviorParameters=_behaviorParameters;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property(copy, nonatomic) NSString *remoteServiceBundleIdentifier; // @synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier;
@property(copy, nonatomic) NSString *remoteViewControllerClassName; // @synthesize remoteViewControllerClassName=_remoteViewControllerClassName;
@property(nonatomic) unsigned long long activationMode; // @synthesize activationMode=_activationMode;
@property(nonatomic) _Bool shouldDismissBulletin; // @synthesize shouldDismissBulletin=_shouldDismissBulletin;
@property(nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property(copy, nonatomic) BBAppearance *appearance; // @synthesize appearance=_appearance;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSDictionary *activatePluginContext; // @synthesize activatePluginContext=_activatePluginContext;
@property(copy, nonatomic) NSString *activatePluginName; // @synthesize activatePluginName=_activatePluginName;
@property(nonatomic) _Bool launchCanBypassPinLock; // @synthesize launchCanBypassPinLock=_launchCanBypassPinLock;
@property(copy, nonatomic) NSString *launchBundleID; // @synthesize launchBundleID=_launchBundleID;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(copy, nonatomic) CDUnknownBlockType internalBlock; // @synthesize internalBlock=_internalBlock;
- (void).cxx_destruct;
- (id)description;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)partialDescription;
- (id)_nameForActionType:(long long)arg1;
- (_Bool)deliverResponse:(id)arg1;
@property(nonatomic) _Bool canBypassPinLock;
- (id)bundleID;
- (id)url;
- (_Bool)hasInteractiveAction;
- (_Bool)hasRemoteViewAction;
- (_Bool)hasPluginAction;
- (_Bool)hasLaunchAction;
- (void)setCallblock:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

