//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <PhotoLibraryServices/PLColorSpaceIdentity-Protocol.h>

@class NSSet, NSString;

@interface PLColorSpace : NSManagedObject <PLColorSpaceIdentity>
{
}

+ (id)commonColorSpace_displaySpace_inContext:(id)arg1;
+ (id)commonColorSpace_unspecified_inContext:(id)arg1;
+ (id)commonColorSpace_sRGB_inContext:(id)arg1;
+ (id)colorSpaceFromName:(id)arg1 createIfMissing:(_Bool)arg2 context:(id)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (_Bool)supportsCloudUpload;

// Remaining properties
@property(copy, nonatomic) NSString *colorSpaceName; // @dynamic colorSpaceName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;
@property(readonly) Class superclass;

@end

