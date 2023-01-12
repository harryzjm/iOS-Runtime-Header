//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <_GroupActivities_UIKit/NSObject-Protocol.h>

@class ISIcon, NSArray, NSDictionary, NSString, NSUUID, NSXPCConnection;

@protocol _EXExtensionRepresenting <NSObject>
- (NSXPCConnection *)makeXPCConnectionWithError:(id *)arg1;
- (id)entitlementNamed:(NSString *)arg1 ofClass:(Class)arg2;
@property(nonatomic, readonly) _Bool requiresLegacyInfrastructure;
@property(nonatomic, readonly) ISIcon *icon;
@property(nonatomic, readonly) NSArray *roles;
@property(nonatomic, readonly) NSDictionary *attributes;
@property(nonatomic, readonly) _Bool requiresSceneHosting;
@property(nonatomic, readonly) _Bool requiresMacCatalystBehavior;
@property(nonatomic, readonly) _Bool presentsUserInterface;
@property(nonatomic, readonly) NSString *localizedName;
@property(nonatomic, readonly) NSUUID *uniqueIdentifier;
@property(nonatomic, readonly) NSString *bundleIdentifier;
@property(nonatomic, readonly) NSString *extensionPointIdentifier;
@end

