//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFObject-Protocol.h>
#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSMutableCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HMIExternalPersonManagerSettings : HMFObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _importingFromPhotoLibraryEnabled;
    _Bool _sharingFaceClassificationsEnabled;
}

+ (_Bool)supportsSecureCoding;
@property(getter=isSharingFaceClassificationsEnabled) _Bool sharingFaceClassificationsEnabled; // @synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled;
@property(getter=isImportingFromPhotoLibraryEnabled) _Bool importingFromPhotoLibraryEnabled; // @synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end
