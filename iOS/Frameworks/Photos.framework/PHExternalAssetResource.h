//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHCPLAssetResource-Protocol.h>

@class NSData, PHAssetResourceCreationOptions;

@interface PHExternalAssetResource <PHCPLAssetResource>
{
    _Bool _duplicateAllowsReadAccess;
    _Bool _isLibraryAssetResource;
    long long _resourceType;
    PHAssetResourceCreationOptions *_creationOptions;
    unsigned long long _cplResourceType;
    NSData *_data;
}

+ (id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(_Bool)arg2 error:(id *)arg3;
+ (unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1;
@property(readonly, nonatomic) _Bool isLibraryAssetResource; // @synthesize isLibraryAssetResource=_isLibraryAssetResource;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long cplResourceType; // @synthesize cplResourceType=_cplResourceType;
@property(copy, nonatomic) PHAssetResourceCreationOptions *creationOptions; // @synthesize creationOptions=_creationOptions;
- (long long)type;
- (void).cxx_destruct;
- (id)uniformTypeIdentifier;
- (id)originalFilename;
@property(nonatomic, setter=_setDuplicateAllowsReadAccess:) _Bool duplicateAllowsReadAccess; // @synthesize duplicateAllowsReadAccess=_duplicateAllowsReadAccess;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResourceType:(long long)arg1;

@end
