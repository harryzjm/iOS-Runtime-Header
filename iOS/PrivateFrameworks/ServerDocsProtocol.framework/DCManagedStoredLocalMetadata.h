//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@interface DCManagedStoredLocalMetadata : NSManagedObject
{
}

+ (id)storedLocalMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)entityName;
- (id)dictionaryRepresentation;
- (void)updateWithStoredLocalMetadataDictionary:(id)arg1;

@end
