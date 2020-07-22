//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_uploadIdentifier;
    _Bool _shouldNotTrustCloudCache;
    _Bool _shouldFilterDefaultValuesForNewProperties;
    _Bool _isSparseFullChange;
    _Bool _inTrash;
    _Bool _inExpunged;
    _Bool _serverRecordIsCorrupted;
    NSString *_identifier;
    NSDate *_recordModificationDate;
    unsigned long long _changeType;
    NSDate *_dateDeleted;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
}

+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned long long)arg1;
+ (id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(_Bool)arg2;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (long long)maxInlineDataSize;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newChangeWithType:(unsigned long long)arg1;
+ (id)newDeleteChangeWithIdentifier:(id)arg1;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (id)newRecord;
+ (id)descriptionForDirection:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
@property(nonatomic) _Bool serverRecordIsCorrupted; // @synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted;
@property(copy, nonatomic) NSData *recordChangeData; // @synthesize recordChangeData=_recordChangeData;
@property(copy, nonatomic) NSString *realIdentifier; // @synthesize realIdentifier=_realIdentifier;
@property(nonatomic) _Bool inExpunged; // @synthesize inExpunged=_inExpunged;
@property(nonatomic) _Bool inTrash; // @synthesize inTrash=_inTrash;
@property(copy, nonatomic) NSDate *dateDeleted; // @synthesize dateDeleted=_dateDeleted;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) NSDate *recordModificationDate; // @synthesize recordModificationDate=_recordModificationDate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)allResourcesAreAvailable;
- (_Bool)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (unsigned long long)fullChangeTypeForFullRecord;
- (_Bool)_canLowerQuota;
- (void)_setShouldNotTrustCloudCache:(_Bool)arg1;
- (_Bool)_shouldNotTrustCloudCache;
- (void)_setUploadIdentifier:(id)arg1;
- (id)_uploadIdentifier;
- (unsigned long long)estimatedRecordSize;
- (_Bool)validateChangeWithError:(id *)arg1;
- (_Bool)validateFullRecord;
- (void)markAsSparseFullChange;
- (_Bool)isSparseFullChange;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (_Bool)shouldFilterDefaultValuesForNewProperties;
- (void)setShouldFilterDefaultValuesForNewProperties:(_Bool)arg1;
- (_Bool)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (id)resourcesDescription;
- (id)cplFullDescription;
- (long long)dequeueOrder;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (id)allRelatedIdentifiers;
- (id)identifiersForQuarantine;
- (id)identifierForQuarantine;
- (id)proposedLocalIdentifier;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)secondaryIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2;
- (_Bool)resourceChangeWillOnlyChangeDerivatives:(id)arg1;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 updatedProperties:(id *)arg4;
- (_Bool)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 updatedProperty:(id *)arg5;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)propertiesDescription;
- (unsigned long long)originalResourceSize;
- (unsigned long long)realResourceSize;
- (unsigned long long)totalResourceSize;
- (id)resourceForType:(unsigned long long)arg1;
- (void)setResources:(id)arg1;
- (id)resources;
- (_Bool)supportsDirectDeletion;
- (_Bool)supportsDeletion;
- (_Bool)supportsResources;
- (_Bool)isDelete;
- (_Bool)isFullRecord;
- (_Bool)hasChangeType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (id)proposedCloudIdentifierWithError:(id *)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (_Bool)validateRecordForTracker:(id)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end

