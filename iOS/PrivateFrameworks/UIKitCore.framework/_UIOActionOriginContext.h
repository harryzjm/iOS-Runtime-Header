//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIOActionOriginContext : NSObject
{
    NSString *_sceneIdentity;
    NSString *_displayIdentifier;
    unsigned int _contextId;
    unsigned long long _layerId;
    struct CGPoint _layerReferencePoint;
}

+ (id)defaultOriginContext;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint layerReferencePoint; // @synthesize layerReferencePoint=_layerReferencePoint;
@property(readonly, nonatomic) unsigned long long layerId; // @synthesize layerId=_layerId;
@property(readonly, nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(readonly, copy, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property(readonly, copy, nonatomic) NSString *sceneIdentity; // @synthesize sceneIdentity=_sceneIdentity;
- (struct CGPoint)translatedReferencePointForDestinationView:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

