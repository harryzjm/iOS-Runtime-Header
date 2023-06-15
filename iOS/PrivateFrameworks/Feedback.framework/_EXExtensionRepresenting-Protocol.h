//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Feedback/NSObject-Protocol.h>

@class ISIcon, NSArray, NSDictionary, NSString, NSUUID, NSXPCConnection;

@protocol _EXExtensionRepresenting <NSObject>
@property(readonly) _Bool requiresLegacyInfrastructure;
@property(readonly) ISIcon *icon;
@property(readonly) NSArray *roles;
@property(readonly) NSDictionary *attributes;
@property(readonly) _Bool requiresSceneHosting;
@property(readonly) _Bool requiresMacCatalystBehavior;
@property(readonly) _Bool presentsUserInterface;
@property(readonly) NSString *localizedName;
@property(readonly) NSUUID *uniqueIdentifier;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSString *extensionPointIdentifier;
- (NSXPCConnection *)makeXPCConnectionWithError:(id *)arg1;
- (id)entitlementNamed:(NSString *)arg1 ofClass:(Class)arg2;
@end

