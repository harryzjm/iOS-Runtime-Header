//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResourceIdentity, CPLScopedIdentifier, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _backgroundDownloadTaskIdentifier;
    _Bool _canGenerateDerivative;
    CPLResourceIdentity *_identity;
    CPLScopedIdentifier *_itemScopedIdentifier;
    unsigned long long _resourceType;
    unsigned long long _sourceResourceType;
}

+ (unsigned long long)countOfResourceTypes;
+ (void)enumerateResourceTypesWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)cplShouldGenerateDerivatives;
+ (float)derivativeGenerationThreshold;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1;
+ (_Bool)hasPriorityBoostForResourceType:(unsigned long long)arg1;
+ (_Bool)shouldIgnoreResourceTypeOnUpload:(unsigned long long)arg1;
+ (id)shortDescriptionForResourceType:(unsigned long long)arg1;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id *)arg2;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(nonatomic) _Bool canGenerateDerivative; // @synthesize canGenerateDerivative=_canGenerateDerivative;
@property(nonatomic) unsigned long long sourceResourceType; // @synthesize sourceResourceType=_sourceResourceType;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) CPLScopedIdentifier *itemScopedIdentifier; // @synthesize itemScopedIdentifier=_itemScopedIdentifier;
@property(retain, nonatomic) CPLResourceIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1;
- (unsigned long long)_backgroundDownloadTaskIdentifier;
- (_Bool)shouldApplyDataProtection;
- (_Bool)shouldCopy;
- (unsigned long long)estimatedResourceSize;
- (_Bool)isTrackedForUpload;
- (id)bestFileNameForResource;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *itemIdentifier;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;

@end

