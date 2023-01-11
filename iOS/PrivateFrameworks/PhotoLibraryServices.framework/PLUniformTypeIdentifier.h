//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <PhotoLibraryServices/PLUniformTypeIdentifierIdentity-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface PLUniformTypeIdentifier : NSManagedObject <PLUniformTypeIdentifierIdentity>
{
    NSNumber *_backingConformsToImage;
    NSNumber *_backingConformsToMovie;
}

+ (id)jpegUniformTypeIdentifierInContext:(id)arg1;
+ (id)uniformTypeIdentifierFromString:(id)arg1 createIfMissing:(_Bool)arg2 context:(id)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPrimaryFormat) _Bool primaryFormat; // @dynamic primaryFormat;
@property(readonly, nonatomic) _Bool conformsToAudio;
@property(nonatomic) _Bool conformsToMovie; // @dynamic conformsToMovie;
@property(nonatomic) _Bool conformsToImage; // @dynamic conformsToImage;
- (_Bool)supportsCloudUpload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;
@property(readonly) Class superclass;

@end
