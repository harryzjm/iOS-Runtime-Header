//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface UIDraggingSystemSceneMetadata : NSObject <NSSecureCoding>
{
    NSString *_activityType;
    NSString *_sceneIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
