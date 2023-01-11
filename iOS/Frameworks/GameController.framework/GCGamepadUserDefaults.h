//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class GCLightbarColor, NSString;

@interface GCGamepadUserDefaults : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    GCLightbarColor *_lightbarColor;
}

+ (id)defaultsForControllerIdentifier:(id)arg1;
+ (id)nsUserDefaults;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) GCLightbarColor *lightbarColor; // @synthesize lightbarColor=_lightbarColor;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)save;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1;

@end
